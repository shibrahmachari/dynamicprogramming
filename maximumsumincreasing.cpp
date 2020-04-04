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
        dp[0]=a[0];
        int maxsum=dp[0];
	    for(int i=1;i<n;i++){
	        int temp=INT_MIN;
	        for(int j=0;j<i;j++){
	            if(a[j]<a[i]){
	                temp=max(temp, dp[j]);
	            }
	        }
	        if(temp!=INT_MIN){
	            dp[i]=temp+a[i];
	        }
	        else{
	            dp[i]=a[i];
	        }
	        maxsum=max(maxsum, dp[i]);
	    }
	    cout<<maxsum<<endl;
	}
	return 0;
}
