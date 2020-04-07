#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    int* dp= new int[n];
	    dp[0]= 1;
	    int ans= dp[0];
	    for(int i=1;i<n;i++){
	        int temp=INT_MIN;
	        for(int j=0;j<i;j++){
	            if(abs(a[j]-a[i])==1){
	                temp=max(temp, dp[j]);
	            }
	        }
	        if(temp!=INT_MIN){
	            dp[i]=1+temp;
	        }else{
	            dp[i]=1;
	        }
	        ans=max (ans, dp[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
