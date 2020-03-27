#include<bits/stdc++.h>
using namespace std;
int fib_better(int n, int* ans){
if(n<=1){
ans[n]=n;
return n;}

if(ans[n-1]==0){
ans[n-1]=fib_better(n-1,ans);
}
if(ans[n-2]==0){
ans[n-2]=fib_better(n-2,ans);
}
ans[n]=ans[n-1]+ans[n-2];
return ans[n];
}
int main(){
int n;
cin>>n;
int* ans = new int[n+1];
for(int i=0;i<=n;i++){
ans[i]=0;
}
cout<<fib_better(n, ans);
return 0;
}
