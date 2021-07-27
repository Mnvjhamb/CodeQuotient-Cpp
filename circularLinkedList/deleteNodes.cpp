/* struct Node
{
    int data;
    Node* next;
};
Above structure is used to define the linked list, You have to complete the below functions only */
Node* deleteBeg(Node* head){
  // Write your code here
  Node* temp = head->next;
  while(temp->next!=head){
    temp=temp->next;
  }
  temp->next = head->next;
  return temp->next;
}
Node* deleteEnd(Node* head){
  // Write your code here
  Node* temp = head->next;
  while(temp->next->next!=head){
    temp=temp->next;
  }
  temp->next = head;
  return head;
}