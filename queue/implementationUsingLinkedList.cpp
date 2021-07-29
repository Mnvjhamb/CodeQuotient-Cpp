class Queue { 
    struct QNode { 
        int data; 
        QNode* next; 
        QNode(int d){ 
            data = d; 
            next = NULL; 
        } 
    }; 
    QNode *front, *rear; 
    public:
  		// Constructor
        Queue(){
			front = NULL;
          	rear = NULL;
        }
  		// Add an element to the queue
        void enQueue(int x){
			if(front == NULL && rear == NULL){
              front = new QNode(x);
              rear = front;
            }
          	else{
              rear->next = new QNode(x);
              rear = rear->next;
            }
        }
  		// Delete front element from the queue
        int deQueue() {
          if(front == NULL && rear == NULL) return -1;
          int d = front->data;
          if(front == rear) {
            rear = NULL;
            front = NULL;
          }else{
            front = front->next;
          }
          return d;
        }
};