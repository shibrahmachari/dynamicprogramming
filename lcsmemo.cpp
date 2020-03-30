#include<bits/stdc++.h>
using namespace std;
int lcs(string s, string t, int** output){
int m=s.size();
int n=t.size();
 if(s.size()==0||t.size()==0)
{return 0;}
if(output[m][n]!=-1){
return output[s.size()][t.size()];}
if(s[0]==t[0]{
return 1+lcs(a.substr(1), b.substr(1), output);
}
else{
int a= lcs(s.substr(1),t);
int b= lcs(s,t.substr(1));
int c= lcs(s.substr(1), t.substr(1))
int ans= max(a,max(b,c));
output[m][n]=ans;
return ans;
}
}

int main(){
string s, t;
cin>>s>>t;
int** output= new int*[s.size()+1];
//take the input for output array
cout<< longest(s,t, output);
return 0;
}
