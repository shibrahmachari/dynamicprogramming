#include <bits/stdc++.h>
using namespace std;
int maxk(int a[], int n, int k){
    int* dp= new int[n];
    dp[0]=a[0];
   int ans=dp[0];
    for(int i=1;i<n;i++){
        int temp= INT_MIN;
        for(int j=0;j<i;j++){
            if(i-j==k){
                temp=max(temp,dp[j]);
            }
        }
        if(temp!=INT_MIN){
            dp[i]=a[i]+temp;
        }else{
            dp[i]=a[i];
        }
        ans= max(ans, dp[i]);
    }
    return ans;
}
int main() {
	int a[]={-1,-2,-3,-4,-5};
	int n= sizeof(a)/sizeof(int);
	int k=1;
	cout<<maxk(a, n, k)<<endl;
	return 0;
}
