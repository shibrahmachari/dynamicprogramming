#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string p;
	    cin>>p;
	    string q;
	    cin>>q;
	    int m= p.size();
	    int n= q.size();
	    int dp[m+1][n+1];
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0){
	                dp[i][j]=j;
	            }else if(j==0)
	            {
	                dp[i][j]=i;
	            }
	            
	            if(p[i-1]==q[j-1]){
	                dp[i][j]=dp[i-1][j-1];
	            }else{
	                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1], dp[i-1][j-1]));
	            }
	        }
	    }
	    cout<<dp[m][n]<<endl;
	}
	return 0;
}
