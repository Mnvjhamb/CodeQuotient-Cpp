/* This function picks an element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right of pivot */
void swap(int array[], int i, int j){
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
int partition (int array[], int low, int high) {
  int pivotInd = low;
  int pivot=array[low];
  for(int i=low+1; i<=high; i++){
    if(array[i] < pivot){
      swap(array, ++pivotInd, i);
    }
  }
  swap(array, low, pivotInd);
  return pivotInd;
}
/* low is for left index and high is right index of the sub-array of arr to be sorted */
void quickSort(int array[], int low, int high) {
  if(low < high){
    int pivotInd = partition(array, low, high);
    quickSort(array, low, pivotInd-1);
    quickSort(array, pivotInd+1, high);
  }
}