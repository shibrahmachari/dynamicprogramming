  int minCost(vector<vector<int>> &c) {
        if(c.size()==0) return 0;
        int row= c.size();
        int col= c[0].size();
        int dp[row][col];
        for(int i=0;i<col;i++){
            dp[0][i]=c[0][i];
        }
        for(int i=1;i<row;i++){
         
            for(int j=0;j<col;j++){
                 int temp=INT_MAX;
                for(int k=0;k<col;k++){
                    if(k!=j){
                        temp=min(temp, dp[i-1][k]);
                    }else{
                        continue;
                    }
                }
                dp[i][j]=temp+c[i][j];
            }
        }
        
        int minsum= INT_MAX;
     
            for(int j=0;j<col;j++){
                minsum=min(minsum, dp[row-1][j]);
            }
        return minsum;
    }
