int maxtriplet(int a[], int n){

int ans=INT_MIN;
for(int i=1;i<n-1;i++){
int max1=INT_MIN;
int min1=INT_MAX;
for(int j=0;j<i;j++){
  min1=min(min, a[j]);
}
for(int j=i+1;j<n;j++){
max1= max(max1, a[j]);
}
ans= max(ans, a[i]+max1+min1);
}
return ans;
}
