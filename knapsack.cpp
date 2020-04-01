#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, w;
	    cin>>n>>w;
	    int wt[n], v[n];
	    for(int i=0;i<n;i++){
	        cin>>wt[i]>>v[i];
	    }
	    int dp[n+1][w+1];
	    for(int i=0;i<=w;i++){
	        dp[0][i]=0;
	    }
	     for(int i=0;i<=n;i++){
	        dp[i][0]=0;
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;i<=w;j++){
	            if(wt[i-1]>j){
	                dp[i][j]=dp[i-1][j];
	            }else{
	                dp[i][j]=max(dp[i-1][j], v[i-1]+dp[i-1][j-wt[i-1]]);
	            }
	        }
	    }
	    cout<<dp[n][w]<<endl;;
	}
	return 0;
}
