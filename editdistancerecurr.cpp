#include <iostream>
#include <vector>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

	//write your code here
    int m=s1.size();
    int n=s2.size();
    if(m==0){
        return n;
    }
     if(n==0){
        return m;
    }

    if(s1[0]==s2[0]){
        return editDistance(s1.substr(1), s2.substr(1));
    }else{
    int x=editDistance(s1.substr(1), s2)+1; //insert
    int y=editDistance(s1, s2.substr(1))+1; //delete
    int z=editDistance(s1.substr(1),s2.substr(1))+1;//replace
        return min(x,min(y,z));
    }
}
