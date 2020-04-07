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
	    lis[0]=a[0];
	     lid[n-1]=a[n-1];

	    for(int i=1;i<n;i++){
	        int temp= INT_MIN;
	        for(int j=0;j<i;j++){
	            if(a[i]>a[j]){
	                temp=max(temp, lis[j]);
	            }
	        }
	        if(temp!=INT_MIN){
	            lis[i]=a[i]+temp;
	        }else{
	            lis[i]=a[i];
	        }
	      
	    }
	    for (int i = n-2; i >= 0; i--) 
      {   int temp= INT_MIN;
      for (int j = n-1; j > i; j--) 
     {   if(a[i]>a[j]){
            temp=max(temp, lid[j]);
        }
	}
      if(temp!=INT_MIN){
          lid[i]=a[i]+temp;
      }else{
          lid[i]=a[i];
      }
          
      }
  
   int max = lis[0] + lid[0] - a[0]; 
   for (int i = 1; i < n; i++) 
     if (lis[i] + lid[i] - a[i] > max) 
         max = lis[i] + lid[i] - a[i]; 
   cout<< max<<endl; 
	}
	return 0;
}
