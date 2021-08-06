/* struct Node
{
  int data;
  Node *left, *right;
};
The above structure is used for tree node and also one function to create a new node as below is provided. 
Node* newNode(int data); 	*/
Node* insertNode(Node* root, int n){
  if(root == NULL) {
    root = newNode(n);
    return root;
  }  
  if(n<=root->data) root->left = insertNode(root->left, n);
  else root->right = insertNode(root->right, n);
  return root;
}
Node* buildSearchTree(int t[], int n){
    Node* root = NULL;
  if(n==0) return NULL;
  root = insertNode(root, t[0]);
    // Complete the function body.
  	for(int i=1; i<n; i++){
      insertNode(root, t[i]);
    }
    return(root);
}