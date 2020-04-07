int maxpro(int a[], int n){

int* dp= new int[n];
dp[0]=a[0];
int ans= dp[0];
for(int i=1;i<n;i++){
   int temp=INT_MIN;
for(int j=0;j<i;j++){
     if(a[i]>a[j]){
     temp=max(temp, dp[j]*a[i]);
     }
}
if(temp!=INT_MIN){
  dp[i]= temp;
}else{
 dp[i]= a[i];
}
ans= max(ans, dp[i]);
}

return ans;
}
