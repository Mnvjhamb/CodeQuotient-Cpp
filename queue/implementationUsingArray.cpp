/*
int front=-1, rear=-1;
int array[SIZE];
Above variables are used for queue, SIZE, front and rear and all are global variables. Complete the below two methods. */
// Method to add an item to the queue.
void enqueue(int item)
{
  if(front == -1 && rear == -1){
    front = 0;
  }
  array[++rear] = item;
}
// Method to remove an item from queue.
int dequeue()
{
  if(front > rear){
    return -1; 
  }
  return array[front++];
}