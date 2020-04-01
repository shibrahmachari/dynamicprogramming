   int bsearch(vector<int>& tail, int l, int r, int key){
      while (r - l > 1) { 
        int m = l + (r - l) / 2; 
        if (tail[m] >= key) 
            r = m; 
        else
            l = m; 
    } 
  
    return r; 
    }
    int lengthOfLIS(vector<int>& nums) {
     int n= nums.size();
        if(n==0){
            return 0;
        }
        
   /*   int dp[n];
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
        return maxe;*/
        vector<int> tail(n, 0);
        tail[0]=nums[0];
        int index=1;
        for(int i=1;i<n;i++){
            if(nums[i]<tail[0]){
                tail[0]=nums[i];
            }
            else if(nums[i]>tail[index-1]){
                tail[index++]=nums[i];
            }
            
            else{
               
                tail[bsearch(tail, -1, index-1, nums[i])]=nums[i];
                 
            }                       
        }
        return index;
    }
};
