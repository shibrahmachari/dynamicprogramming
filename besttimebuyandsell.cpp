    int maxProfit(vector<int>& prices) {

        int n= prices.size();
        if(n==0){
            return 0;
        }
        int maxsofar=n-1;
        int maxsum=0;
        int* dp= new int[n];
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(prices[i]>prices[maxsofar]){
                dp[i]=0;
                maxsofar=i;
            }else{
                dp[i]= prices[maxsofar]-prices[i];
            }
            maxsum= max(maxsum, dp[i]);
        }
        return maxsum;
    }
