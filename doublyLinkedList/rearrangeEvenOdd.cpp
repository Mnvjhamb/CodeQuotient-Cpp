/* struct Node
{
    int data;
    Node *next;
  	Node *prev;
};
Above structure is used to define the linked list, You have to complete the below functions only */
Node* rearrangeList(Node* head){
  // Write your code here
  if(head == NULL) return NULL;
  if(head->next == NULL) return head;
  Node* temp = head->next;
  Node* newHead = NULL;
  newHead = insertEnd(newHead, temp->data);
  temp=temp->next;
  for(int i=3; temp!=NULL; i++){
    if(i%2 == 0){
      insertEnd(newHead, temp->data);
    }
    temp = temp->next;
  }
  temp=head;
  for(int i=1; temp!=NULL; i++){
    if(i%2 != 0){
      insertEnd(newHead, temp->data);
    }
    temp = temp->next;
  }
  return newHead;
}