/* struct Node
{
    int data;
    Node* next;
};
Above structure is used to define the linked list, You have to complete the below functions only */
int countNodes(Node* head){
  // Write your code here
  if(head == NULL) return 0;
  int length = 0;
  Node* temp = head->next;
  while(temp!=head){
    temp=temp->next;
    length++;
  }
  return length+1;
}