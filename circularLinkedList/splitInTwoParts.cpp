/* struct Node
{
    int data;
    struct Node* next;
};
Above structure is used to define the linked list, You have to complete the below functions only */
Node* listCut(Node* head){
  // Write your code here
  if(head == NULL) return NULL;
  int length=1;
  Node* temp = head;
  while(temp->next != head){
    length++;
    temp = temp->next;
  }
  temp=head;
  Node* newHead;
  for(int i=1; temp->next != head; i++){
    if(i == length/2){
      newHead = temp->next;
      temp->next = head;
    }
    temp=temp->next;
  }
  temp=newHead;
  while(temp->next != head){
    temp=temp->next;
  }
  temp->next = newHead;
  return newHead;
}