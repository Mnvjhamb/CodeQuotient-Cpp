struct Node * shiftSmallLarge(struct Node *org)
{
  Node* min = org;
  Node* max = org;
  Node* temp = org;
  Node* tail = org;
  while(temp){
    if(min->data > temp->data) min = temp;
    if(max->data < temp->data) max = temp;
    if(temp->next == NULL) tail = temp;
    temp = temp->next;
  }
  
  temp = org;
  while(temp){
    if(temp == tail) return min;
    if(temp->next == min){
      temp->next = temp->next->next;
      min->next = org;
      if(temp->next != max) {
        temp = temp->next;
        continue;
      }
    }
    if(tail == max) return min;

    if(temp->next == max){
      temp->next = temp->next->next;
      tail->next = max;
      max->next = NULL;
      if(temp->next != min) {
        temp = temp->next;
        continue;
      }
    }
    temp = temp->next;
  }
  
  return min;

}