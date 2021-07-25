void deleteNodeK(Node* node){
  // Write your code here
  if(node == NULL || node->next == NULL){
    return;
  }
  node->data = node->next->data;
  node->next = node->next->next;
}