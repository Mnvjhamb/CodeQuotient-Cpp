#include<iostream>
#include<cstdio>
#include<cmath>
#include <bits/stdc++.h>
// Include headers as needed
using namespace std;
int main()
{
	int arr[5];
  	for(int i=0; i<5; i++){
      cin>>arr[i];
    }
  int max = INT_MIN;
  for(int i=0; i<5; i++){
    if(arr[i] > max){
      max=arr[i];
    }
  }
  int max2 = INT_MIN;
  for(int i=0; i<5; i++){
    if(arr[i] > max2 && arr[i] != max){
      max2=arr[i];
    }
  }
  if(max2 == INT_MIN){
    max2=max;
  }
  cout<<max2;
    return 0;
}