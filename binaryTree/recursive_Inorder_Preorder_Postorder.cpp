/* struct Node
{
  int data;
  Node *left, *right;
};
The above structure is used for tree node.
*/
void inorder(Node* root){
  if(root == NULL) return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void preorder(Node* root){
  // Write your code here
  if(root == NULL) return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void postorder(Node* root){
  // Write your code here
  if(root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}