#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t-->0){
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    int minInd=-1;
    while(l<=r){
      int m=(l+r)/2;
      if(arr[m] == x){
        minInd=m;
        break;
      }
      else if(arr[m]<x){
        l=m+1;
      } else{
        r=m-1;
      }
    }
    while(minInd>0 && arr[minInd-1] == x){
      minInd--;
    }
    cout<<minInd<<endl;
  }
   return 0;
}