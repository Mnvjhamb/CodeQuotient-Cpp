/* struct Node
{
    int data;
    struct Node* next;
};
Above structure is used to define the linked list, You have to complete the below functions only */
Node* insertSorted(Node* head, int k){
  // Write your code here
  if(head == NULL ){
    head = insertBeg(head, k);
    return head;
  }
  Node* temp;
  if(head->data > k){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = k;
    newNode->next = head;
    temp=head->next;
    while(temp->next!=head){
      temp = temp->next;
    }
    temp->next = newNode;
    head=newNode;
    return head;
  }
  temp = head;
  while(temp->next != head){
    if(temp->next->data > k){
      break;
    }
    temp=temp->next;
  }
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = k;
  newNode->next = temp->next;
  temp->next = newNode;
  return head;
}