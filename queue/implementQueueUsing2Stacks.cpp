/* push(int), pop(), isEmpty(), isFull() are available on Stack. */
class Queue
{
  public:
  void enqueue(CQStack *st1, CQStack *st2, int item)
  {
    if(st2->isEmpty()){
      st1->push(item);
    } else if(st1->isEmpty()){
      st2->push(item);
    }
  }
  int dequeue(CQStack *st1, CQStack *st2)
  {
    if(st1->isEmpty()){
      while(!st2->isEmpty()){
        st1->push(st2->pop());
      }
      return st1->pop();
    }
	else if(st2->isEmpty()){
      while(!st1->isEmpty()){
        st2->push(st1->pop());
      }
      return st2->pop();
    } return -1;
  }
};