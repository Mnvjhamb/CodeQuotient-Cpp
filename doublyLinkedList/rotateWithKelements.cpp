/* struct Node
{
    int data;
    Node *next;
  	Node *prev;
};
Above structure is used to define the linked list, You have to complete the below functions only */
Node* rotateByK(Node* head, int k)
{
  if(head == NULL){ 
  	return NULL;
  }
  Node* tail = head;
  while(tail->next!=NULL){
    tail=tail->next;
  }
  for(int i=0; i<k; i++){
    head->prev = tail;
    tail->next = head;
    tail->prev->next = NULL;
    tail = tail->prev;
    head = head->prev;
  }
  return head;
}