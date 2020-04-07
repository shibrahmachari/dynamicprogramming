#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int* lis= new int[n];
	    int* lid= new int[n];
	    lis[0]=1;
	    for(int i=0;i<n;i++){
        lid[i]= 1; 
        }
	    int ans1=lis[0];
	    int ans2= lid[0];
	    for(int i=1;i<n;i++){
	        int temp= INT_MIN;
	        for(int j=0;j<i;j++){
	            if(a[i]>a[j]){
	                temp=max(temp, lis[j]);
	            }
	        }
	        if(temp!=INT_MIN){
	            lis[i]=1+temp;
	        }else{
	            lis[i]=1;
	        }
	        ans1= max(ans1, lis[i]);
	    }
	    for (int i = n-2; i >= 0; i--) 
      for (int j = n-1; j > i; j--) 
         if (a[i] > a[j] && lid[i] < lid[j] + 1) 
            lid[i] = lid[j] + 1; 
  
   int max = lis[0] + lid[0] - 1; 
   for (int i = 1; i < n; i++) 
     if (lis[i] + lid[i] - 1 > max) 
         max = lis[i] + lid[i] - 1; 
   cout<< max<<endl; 
	}
	return 0;
}
