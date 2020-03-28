#include <iostream>
using namespace std;
long int tile(int w){
   long int dp[w+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=w;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[w];
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int w;
	    cin>>w;
	    cout<<tile(w)<<endl;
	}
	return 0;
}
