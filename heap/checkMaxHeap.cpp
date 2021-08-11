int isMaxHeap(int array[], int n){
  // Write your code here
  for(int i=0; i<=(n-2)/2; i++){
    if(2*i+1<n && array[i] < array[2*i+1]) return 0;
    if(2*i+2<n && array[i] < array[2*i+2]) return 0;
  }
  return 1;
}