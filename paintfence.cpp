    int numWays(int n, int k) {
        int* same= new int[n+1];
        int* diff= new int[n+1];
           same[0]=0;
           diff[0]=0;
           same[1]=0;
           diff[1]=k;
           for(int i=2;i<=n;i++){
               same[i]=diff[i-1];
               diff[i]=(same[i-1]+diff[i-1])*(k-1);
           }
           return same[n]+diff[n];
    }
