/* struct Node
{
  int data;
  Node *left, *right;
};
The above structure is used for tree node. */
#include <vector>
#include <iostream> 
using namespace std;
vector<int> insert(vector<int> res, vector<int> li){
  for(int i=0; i<li.size(); i++){
    res.push_back(li[i]);
  }
  return res;
}
vector<int> list(Node* root){
  vector<int> res;
  if(root==NULL) return res;
  if(root->left) res = insert(res, list(root->left));
  res.push_back(root->data);
  if(root->right) res = insert(res, list(root->right));
  return res;
}
int kSmallest(Node* t1, int k){
  // Write your code here
  if(t1 == NULL) return 0;
  vector<int> li = list(t1);
  if(k>=li.size()) return -1;
  return li[k-1];
}