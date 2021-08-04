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
      cin>>arr[i];
    }
    int swaps=0;
    for(int i=0; i<n-1; i++){
      int min = i+1;
      for(int j=i+1; j<n; j++){
        if(arr[min] > arr[j]){
          min = j;
        }
      }
      if(arr[min]<arr[i]){
        swaps++;
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
      }
    }
    cout<<swaps<<endl;
  }
   return 0;
}