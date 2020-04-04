static bool compare(val a, val b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}
int maxChainLen(struct val p[],int n)
{  int* dp= new int[n];
  sort(p, p+n, compare);
  dp[0]=1;
  int maxlen=dp[0];
 for(int i=1;i<n;i++){
     int temp= INT_MIN;
  for(int j=0;j<i;j++){
      if(p[j].second<p[i].first){
          temp=max(temp, dp[j]);
      }
  }
  if(temp!=INT_MIN){
      dp[i]=1+temp;
  }else{
      dp[i]=1;
  }
  maxlen=max(maxlen, dp[i]);
 }
 return maxlen;
}
