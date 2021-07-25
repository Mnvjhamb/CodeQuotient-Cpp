void forwardPrint(struct Node* head)
{
  if (head == NULL)
    return;
  cout<<head->data<<'-';
  forwardPrint(head->next);
}
void backwardPrint(struct Node* head)
{
  if (head == NULL)
      return;
  backwardPrint(head->next);
  cout<<head->data<<'-';
}