/* struct Node {
  int data;
  struct Node *left, *right;
};
The above structure is used for tree node and the function below is also provided to build a new node with given data. 
struct Node* newNode(int data);
*/
struct Node* buildTree(int t[], int n){
  if(n==0) return NULL;
  struct Node* nodes[n];
  for(int i=0; i<n; i++){
	nodes[i] = newNode(t[i]);
  }
  for(int i=0; i<n/2; i++){
    nodes[i]->left = nodes[2*i + 1];
    if(2*i+2 >= n){
      nodes[i]->right = NULL;
    }else{
      nodes[i]->right = nodes[2*i + 2];
    }
  }
  return nodes[0];
}