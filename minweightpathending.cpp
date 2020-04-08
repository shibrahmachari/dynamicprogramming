int maxweight(int mat[][], int m,int n)
{
   for(int i=1;<m;i++)
   {  mat[i][0]+=mat[i-1][0];
   }
   
   for(int i=1;i<m;i++){
   for(int j=1;j<n;j++){
       mat[i][j]+=max(mat[i-1][j], mat[i-1][j-1]);
     }
   }
   int mxe= mat[m-1][0];
   for(int i=1;i<n;i++){
   mxe= max(mxe, mat[i][0]);
   }
return mxe;
}
