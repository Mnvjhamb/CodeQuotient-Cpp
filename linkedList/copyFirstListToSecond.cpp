struct Node *copyList(struct Node *org)
{
  Node* head = NULL;
  while(org!=NULL){
    insertEnd(&head, org->data);
    org=org->next;
  }
  return head;
}