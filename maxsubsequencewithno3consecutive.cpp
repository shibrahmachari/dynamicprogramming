int maxseq(int a[], int n){
int* sum= new int[n];
sum[0]=nums[0];
sums[1]= nums[0]+nums[1];
sums[2]= max(sum[1],(nums[2]+nums[0], nums[1]+nums[2]));

for(int i=3;i<n;i++){

sum[i]= max(sum[i-1], max(nums[i]+sum[i-2], nums[i]+nums[i-1]+sum[i-3]));

}
int maxe= dp[0];
for(int i=0;i<n;i++){
  maxe= max(maxe, sums[i];
}
return maxe;
}
