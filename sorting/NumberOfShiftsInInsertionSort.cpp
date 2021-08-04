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
    int totalShifts = 0;
    for(int i=1; i<n; i++){
      int shifts=0;
      for(int j=0; j<i; j++){
        if(arr[i] < arr[j]){
          shifts++;
        }
      }if(shifts) totalShifts+= ++shifts;
    }
    cout<<totalShifts<<endl;
  }
   return 0;
}