#include<string.h>
int minReversal(char* expr){
  // Write your code here
  int length = strlen(expr);
  if(length % 2 == 1) return -1;
  stack<char> s;
  for(int i=0; i<length; i++){
    if(expr[i] == ']' && !s.empty() ){
      if(s.top() == '['){
        s.pop();
      } else{
        s.push(expr[i]);
      }
    }
    else{
      s.push(expr[i]);
    }
  }
  int stack_length = s.size();
  int n=0;
  while(!s.empty() && s.top() == '['){
    s.pop();
    n++;
  }
  return (stack_length/2 + n%2);
}