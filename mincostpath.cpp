#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int helper(int** input, int a, int b, int m, int n){
  /* if(a>=m||b>=n){
       return INT_MAX;
   }
   else if(a==m-1&&b==n-1){
        return input[a][b];
    }
    else{
    int x=helper(input, a, b+1,m,n);
    int y= helper(input,  a+1 ,b,m,n);
    int z=helper(input,a+1,b+1,m,n);
    return input[a][b]+min(x,min(y,z));
    }*/
    
    //memo
   /* if(a>=m||b>=n){
        return INT_MAX;
    }
    if(a==m-1&&b==n-1){
        return input[a][b];
    }
    if(output[a][b]!=-1){
        return output[a][b];
    }
    int x=helper(input, a, b+1,m,n, output);
    int y= helper(input,  a+1 ,b,m,n, output);
    int z=helper(input,a+1,b+1,m,n, output);
    int l=min(x,min(y,z))+input[a][b];
    output[a][b]=l;
    return l;*/
    //dp
    
    int** output= new int*[m];
    for(int i=0;i<m;i++){
        output[i]= new int[n];
    }
    output[m-1][n-1]=input[m-1][n-1];
    for(int j=n-2;j>=0;j--){
        output[m-1][j]=output[m-1][j+1]+input[m-1][j];
    }
    for(int j=m-2;j>=0;j--){
        output[j][n-1]=output[j+1][n-1]+input[j][n-1];
    }
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            output[i][j]=input[i][j]+min(output[i+1][j],min( output[i+1][j],output[i+1][j+1]));
        }
    }
    return output[0][0];
}



int minCostPath(int **input, int m, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
  */
    
    return helper(input,0,0,m,n);
}
