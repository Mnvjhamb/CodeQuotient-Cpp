/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node.
*/
#include <queue>
void printOdd(struct Node* root)
{
  if(root == NULL) return;
  queue<Node*> q;
  q.push(root);
  struct Node* temp;
  while(!q.empty()){
    temp = q.front();
    cout<<temp->data<<" ";
    if(temp->left) {
      if(temp->left->left) q.push(temp->left->left);
      if(temp->left->right) q.push(temp->left->right);
    };
	if(temp->right) {
      if(temp->right->left) q.push(temp->right->left);
      if(temp->right->right) q.push(temp->right->right);
    };
    q.pop();
  }
}