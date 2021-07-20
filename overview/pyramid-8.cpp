#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i; j++){
      cout<<j+1;
    }
    for(int j=0; j<2*i-1; j++){
      cout<<"*";
    }
    if(i==0){
      for(int j=n-i-2; j>=0; j--){
      	cout<<j+1;
      }
    } else{
      for(int j=n-i-1; j>=0; j--){
      	cout<<j+1;
      }
    }
    cout<<"\n";
  }
   return 0;
}