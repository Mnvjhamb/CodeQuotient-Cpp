#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int num=1;
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout<<num;
      num+=1;
      if(j<i){
        cout<<" ";
      }
    }
    cout<<"\n";
  }
   return 0;
}