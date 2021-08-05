/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */
int countLeafs(struct Node* root) 
{
  if(root == NULL ) return 0;
  if(root->left == NULL && root->right == NULL) return 1;
  return countLeafs(root->left) + countLeafs(root->right);
}
int countNonLeafs(struct Node* root) 
{
  if(root == NULL) return 0;
  if(root->left == NULL && root->right == NULL) return 0;
  return 1 + countNonLeafs(root->left) + countNonLeafs(root->right);
}