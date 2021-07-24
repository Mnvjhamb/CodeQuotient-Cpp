int search(int arr[], int n, int x, int i);
#include <bits/stdc++.h>
int getPairsCount(int arr[], int n, int sum){
  // Write your code here
  int count=0;
  for(int i=0; i<n; i++){
    int c=search(arr, n, sum-arr[i], i);
    if(c>0){
      count+=c;
    }
  }
  return count/2;
}
int search(int arr[], int n, int x, int i){
  int l=0; 
  int r=n-1;
  int m;
  while(l<=r){
    m=(l+r)/2;
    if(arr[m] == x){
      int t=m;
      int count=1;
      while(arr[t-1] == arr[m]){
        if(t!=i){
          count+=1;
        }
        t--;
      }
      t=m;
      while(arr[t+1] == arr[m]){
        if(t!=i){
          count+=1;
        }
        t++;
      }
      return count;
    }
    else if(arr[m] < x){
      l = m+1;
    }
    else{
      r = m-1;
    }
  }
  return 0;
}