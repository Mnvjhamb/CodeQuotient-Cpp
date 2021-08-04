// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] and Second subarray is arr[m+1..r] 
void merge(int array[], int l, int m, int r) {
  if(l == r){
    return;
  }
  int left[m-l+1];
  int right[r-m];
  int i=0;
  for(int j=l; j<=m; j++){
    left[i++] = array[j];
  }
  i=0;
  for(int j=m+1; j<=r; j++){
    right[i++] = array[j];
  }
  int i1=0, i2=0;
  i=l;
  while(i1<m-l+1 && i2<r-m){
    if(left[i1] < right[i2]){
      array[i++] = left[i1++];
    } else{
      array[i++] = right[i2++];
    }
  }
  while(i1<m-l+1){
    array[i++] = left[i1++];
  }
  while(i2<r-m){
    array[i++] = right[i2++];
  }
}
/* l is for left index and r is right index of the sub-array of arr to be sorted */
void mergeSort(int array[], int l, int r) {
  if(l<r){
    mergeSort(array, l, (l+r)/2);
    mergeSort(array, (l+r)/2+1, r);
    merge(array, l, (l+r)/2, r);
  }
}