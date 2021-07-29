/* enqueue(int) & dequeue() are available on queues.*/
class Stack
{
  public:
  void push(QueueArray* qa1, QueueArray* qa2, int item)
  {
    qa1->enqueue(item);
  }
  int pop(QueueArray* qa1, QueueArray* qa2)
  {
    int arr[1000];
    int size = 0;
    int popped = qa1->dequeue();
    while(popped != -1){
      arr[size++] = popped;
      popped = qa1->dequeue();
    }
    if(size == 0) return -1;
    int res = arr[--size];
    for(int i=0; i<size; i++){
      qa1->enqueue(arr[i]);
    }
    return res;
  }
};