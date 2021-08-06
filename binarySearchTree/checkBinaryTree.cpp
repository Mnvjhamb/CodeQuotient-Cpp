/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */
int isBinarySearchTree(struct Node* t1){
  if(t1 == NULL) return 1;
  if(t1->left == NULL && t1->right == NULL) return 1;
  if((t1->left && (t1->data < t1->left->data)) || (t1->right && (t1->data > t1->right->data))) return 0;
  if(isBinarySearchTree(t1->left) == 0) return 0;
  if(isBinarySearchTree(t1->right) == 0) return 0;
  return 1;
}