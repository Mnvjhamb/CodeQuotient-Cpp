#include<iostream>
#include<cstdio>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int freq(int arr[], int n, int len);
int main()
{
  int t;
  cin>>t;
  while(t-->0){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    int maxFreq = INT_MIN;
    int maxFreqEle;
    for(int i=0; i<n; i++){
      int f=freq(arr, arr[i], n);
      if(f >= maxFreq){
        maxFreq=f;
        maxFreqEle=arr[i];
      }
    }
    cout<<maxFreqEle<<endl;
  }
   return 0;
}
int freq(int arr[], int n, int len){
  int count=0;
  for(int i=0; i<len; i++){
    if(arr[i] == n){
      count++;
    }
  }
  return count;
}