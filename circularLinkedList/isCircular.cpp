/* struct Node
{
    int data;
    struct Node* next;
};
Above structure is used to define the linked list, You have to complete the below functions only */
int isCircular(Node* head){
  // Write your code here
  if(head == NULL) return 1;
  Node* temp = head->next;
  while(temp!=head){
    if(temp==NULL) return 0;
    temp = temp->next;
  }
  return 1;
}