int rotationCount(int a[], int size){
  // Write your code here
  for(int i=1; i<size; i++){
    if(a[i]<a[i-1]){
      return i;
    }
  }
  return 0;
}