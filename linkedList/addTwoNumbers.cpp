// struct Node
// {
//   int data;
//   Node* next;
// };
// Above node is used to declare a node
Node* addListNumbers(Node* head1,Node* head2){
  if(head1 == NULL && head2 == NULL) return NULL;
  if(head1 == NULL) return head2;
  else if(head2 == NULL) return head1;
  // Write your code here
  Node* res = NULL;
  int value;
  int carry = 0;
  while(head1 != NULL && head2 != NULL){
    value = (head1->data + head2->data) + carry;
    if(value>9){
      carry = 1;
      value = value%10;
    } else{
      carry=0;
    }
    insertEnd(&res, value);
    head1=head1->next;
    head2=head2->next;
  }
  while(head1){
    value = head1->data + carry;
    if(value>9){
      value = value%10;
      carry = 1;
    }
    else{
      carry = 0;
    }
    insertEnd(&res, value);
    head1 = head1->next;
  }
  while(head2){
    value = head2->data + carry;
    if(value>9){
      value = value%10;
      carry = 1;
    }
    else{
      carry = 0;
    }
    insertEnd(&res, value);
    head2 = head2->next;
  }
  
  if(carry) insertEnd(&res, carry);
  
  return res;
}