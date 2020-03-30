#include<iostream>
#include<cstring>
using namespace std;
int helper(string s1, string s2,  int** output){
    int m=s1.size();
    int n=s2.size();
    if(m==0)
        return n;
    if(n==0)
        return m;
    if(output[m][n]!=-1){
        return output[m][n];
    }
    if(s1[0]==s2[0]){
        return helper(s1.substr(1), s2.substr(1),output);
    }
    else{
    int x=helper(s1.substr(1), s2, output)+1; //insert
    int y=helper(s1, s2.substr(1), output)+1; //delete
    int z=helper(s1.substr(1),s2.substr(1), output)+1;//replace
     int ans= min(x,min(y,z));
        output[m][n]=ans;
        return ans;
    }
    
}
int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
int m= s1.size();
int n= s2.size();
    int** output= new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i]= new int[n+1];
        for(int j=0;j<=n;j++){
            output[i][j]=-1;
        }
    }
return helper(s1,s2,output);
}

