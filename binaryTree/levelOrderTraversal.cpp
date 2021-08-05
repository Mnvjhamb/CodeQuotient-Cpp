/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node.
*/
#include <queue>
void printLevelWise(struct Node* root){
  if(root == NULL) return;
  queue<Node*> q;
  struct Node* temp = root;
  q.push(temp);
  int i=1;
  int j=1;
  while(temp){
    cout<<temp->data;
    if(i == j){
      cout<<endl;
      i=0;
      j*=2;
    }else{
      cout<<" ";
    }
    i++;
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);
    q.pop();
    temp = q.front();
  }
}