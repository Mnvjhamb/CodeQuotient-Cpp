int Search(int arr[], int x, int n);
int getMissingElement(int* a,int a_size,int* b ,int b_size){
  // Write your code here
  for(int i=0; i<a_size; i++){
    if(Search(b, a[i], b_size) == -1){
      return a[i];
    }
  }
}
int Search(int arr[], int x, int n){
  for(int i=0; i<n; i++){
    if(arr[i] == x){
      return i;
    }
  }
  return -1;
}