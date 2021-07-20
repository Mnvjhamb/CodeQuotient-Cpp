#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int notes[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
  int amount;
  cin>>amount;
  int i=0;
  int numberofNotes[] = {0,0,0,0,0,0,0,0,0};
  while(amount>0){
    if(amount>=notes[i]){
      numberofNotes[i]+=1;
      amount-=notes[i];
    } else{
      i+=1;
    }
  }
  for(int i=0; i<9; i++){
    cout<<numberofNotes[i]<<" ";
  }
   return 0;
}