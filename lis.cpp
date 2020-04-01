   int lengthOfLIS(vector<int>& nums) {
     int n= nums.size();
        if(n==0){
            return 0;
        }
      int dp[n];
  dp[0]=1;
        for(int i=1;i<n;i++){
            int x= nums[i];
            int temp=INT_MIN;
            for(int j=0;j<i;j++){
              if(x>nums[j]){
                  temp=max(temp,dp[j]);
              }
            }
            if(temp!=INT_MIN){
                dp[i]=1+temp;
            }
            else{
                dp[i]=1;
            }
        }
        int maxe=dp[0];
        for(int i=0;i<n;i++){
            maxe=max(maxe,dp[i]);
        }
        return maxe;
    }
