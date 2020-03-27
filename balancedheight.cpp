#include<bits/stdc++.h>
int balanced(int h){
if(h<=1){
return 1;}

int x= balanced(h-1);
int y= balanced(h-2);

int ans= x*x+2*x*y;
return ans;
}
int main(){
int h;
cin>>h;
cout<<balanced(h);
return 0;
}
