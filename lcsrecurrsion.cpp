#include<bits/stdc++.h>
using namespace std;
int lcs(string s, string t){
 if(s.size()==0||t.size()==0)
{return 0;}

if(s[0]==t[0]{
return 1+lcs(a.substr(1), b.substr(1));
}
else{
int a= lcs(s.substr(1),t);
int b= lcs(s,t.substr(1));
int c= lcs(s.substr(1), t.substr(1))
return max(a,max(b,c));
}
}

int main(){
string s, t;
cin>>s>>t;
cout<< longest(s,t);
return 0;
}
