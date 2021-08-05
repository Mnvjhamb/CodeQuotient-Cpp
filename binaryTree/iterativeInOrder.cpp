/* struct Node
{
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node. */
#include <stack>
void printInorder(struct Node* root)
{
  if(root == NULL) return;
  stack<Node*> stack;
  struct Node* current = root;
  while(current){
    while(current){
      stack.push(current);
      current = current->left;
    }
    cout<<stack.top()->data<<" ";
    stack.pop();
    if(!stack.empty()){
      current = stack.top();
      cout<<current->data<<" ";
      stack.pop();
      current = current->right;
    }
  }
}