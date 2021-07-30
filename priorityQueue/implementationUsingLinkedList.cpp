// struct Node{
//   int data;
//   int priority;
//   Node* next;
//   Node();
//   Node(int d,int p);
// };
// The above structure is used to declare a node
class PriorityQueue{
  Node* front,*rear;
  public:
  	PriorityQueue(){
      front = NULL;
      rear = NULL;
    }
  	// Add element to priority queue
  	void enQueue(int data,int priority){
      // Write your code here
      Node* newNode = new Node(data, priority);
      if(front == NULL) {
        front = newNode;
        return;
      }
      else if(front->priority > priority){
        newNode->next = front;
        front = newNode;
      } else{
        Node* t = front;
        while(t->next != NULL && t->next->priority <= priority){
          t=t->next;
        }
        newNode->next = t->next;
        t->next = newNode;
      }
    }
  	// Remove element from priority queue
  	int deQueue(){
      int res = front->data;
      front = front->next;
      return res;
    }
};