#include<bits/stdc++.h>
using namespace std;
int min_better(int n, int* ans){
if(n==1){
ans[n]=0;
return 0;}

if(ans[n-1]==-1){
ans[n-1]=min_better(n-1,ans);
}
if(n%2==0){
if(ans[n/2]==-1){
ans[n/2]=min_better(n/2,ans);
}
}
if(n%3==0){
if(ans[n/3]==-1){
ans[n/3]=min_better(n/3,ans);
}
}
ans[n]=1+min(ans[n-1],min(ans[n/2],ans[n/3]));
return ans[n];
}
int main(){
int n;
cin>>n;
int* ans = new int[n+1];
for(int i=0;i<=n;i++){
ans[i]=-1;
}
cout<<min_better(n, ans);
return 0;
}
