#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  // Write your code here
  int arr[10];
  for(int i=0; i<10; i++){
    cin>>arr[i];
  }
  int pos=0;
  int neg=0;
  int even=0;
  int odd=0;
  for(int i=0; i<10; i++){
    if(arr[i]>=0){
      pos++;
    } else{
      neg++;
    } 
    if(arr[i] % 2==0){
      even++;
    } else{
      odd++;
    }
  }
  cout<<pos<<endl<<neg<<endl<<even<<endl<<odd<<endl;
  return 0;
}