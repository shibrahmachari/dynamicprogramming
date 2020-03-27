#include<bits/stdc++.h>
int balanced(int h){
int* ans= new int[h+1];
ans[0]=1;
ans[1]=1;
int mod=(int)(pow(10,9))+7;
for(int i=2;i<=h;i++){
int x= ans[i-1];
int y= ans[i-2];
int temp1=(int)(((long)(x)*x)%mod);
int temp2=(int)((2*(long)(x)*y)%mod);
ans[i]= (temp1+temp2)%mod;
}
return ans;
}
int main(){
int h;
cin>>h;
cout<<balanced(h);
return 0;
}
