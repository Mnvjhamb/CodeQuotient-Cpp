#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t-->0){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    int swaps = 0;
    for(int i=n-1; i>0; i--){
      for(int j=0; j<i; j++){
        if(arr[j] > arr[i]){
          swaps++;
        }
      }
    }
    cout<<swaps<<endl;
  }
   return 0;
}