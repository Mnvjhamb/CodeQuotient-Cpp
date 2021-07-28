/* 
int Stack[SIZE], top = -1;
int isFull();
int isEmpty();
Above variables are used for Stack, SIZE and top and all are global variables. Also above two functions are provided. */
#include <bits/stdc++.h>
// Function to add an item to stack.
void push(int item)
{
	Stack[++top] = item;
}
// Function to remove an item from stack.
int pop()
{
	if(isEmpty()) return -1;
  else{
    return Stack[top--];
  }
}
// Function to return the minimum item from stack.
int getMin()
{
  int min = INT_MAX;
	for(int i=0; i<=top; i++){
      if(min>Stack[i]) min = Stack[i];
    }
  return min;
}