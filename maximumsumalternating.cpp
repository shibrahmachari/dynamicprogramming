int maxsum(int arr[], int n){
 int* inc = new int[n];
 int * dec=new int[n];
inc[n-1]=arr[n-1];
inc[n-1]=arr[n-1];
for(int i=n-2;i>=0;i++){
    int temp=INT_MIN
for(int j=i+1;j<n;j++){
   if(arr[j]<arr[i]){
    temp=max(temp, dec[j]);
   }
}
if(temp!=INT_MIN)
{inc[i]=temp+arr[i];}
else{
inc[i]=arr[i];
}
  int emp= INT_MIN
for(int j=i+1;j<n;j++){
   if(arr[j]>arr[i]){
    temp=max(temp, inc[j]);
   }
}

if(emp!=INT_MIN)
{dec[i]=emp+arr[i];}
else{
dec[i]=arr[i];
}

}
return inc[0];
}
