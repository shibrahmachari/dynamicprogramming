static bool compare (citypair a, citypair b){
   if(a.north==b.north){
     return a.south<b.south;
   }
   else{
    return a.north<b.north;
    }
}
int building(citypair n[], citypair s[], int size){
sort(n, n+size, compare);
//in south array finding the lis
int lis[size];
lis[0]=1;
for(int i=1;i<size;i++){
   int temp=INT_MIN;
for(int j=0;j<i;j++){
 if(s[i]>=s[j])
   temp=max(temp,s[j]);
}
if(temp!=INT_MIN)
{lis[i]=1+temp;}
else{
lis[i]=1;}

}

int mxe=INT_MIN;
for(int i=0;i<size;i++){
mxe=max(mxe,lis[i]);
}
return mxe;
}
