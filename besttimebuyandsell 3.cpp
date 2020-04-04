    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        if(n==0||n==1) return 0;
        int* dp= new int[n];
        int maxsofar=n-1;
        for(int i=n-2;i>=0;i--){
            if(prices[i]>prices[maxsofar]){
                dp[i]=0;
                maxsofar=i;
            }
            else{
                dp[i]=prices[maxsofar]-prices[i];
            }
        }
        
        int minsofar= 0;
        int profit=0;
        int maxsum=dp[0];
        int sum;
        for(int i=1;i<n;i++){
            sum=0;
            if(prices[i]<prices[minsofar]){
                minsofar=i;
            }else{
               profit= prices[i]-prices[minsofar];
            }
            sum+=profit+dp[i];
            maxsum=max(maxsum, sum);
        }
        return maxsum;
    }
