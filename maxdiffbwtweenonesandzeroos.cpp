int maxdiff(int a[], int n){
for(int i=0;i<n;i++){
if(a[i]==0) a[i]=1;
else a[i]=-1;
}
int sum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
sum+=a[i];
maxsum=max(maxsum, sum);
if(sum<0){
sum=0;
}

}
return maxsum;
}
