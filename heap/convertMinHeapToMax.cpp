void maxHeapify(int a[], int i, int n){
  int largest = i;
  if(2*i+1<n && a[i] < a[2*i+1]){
    largest=2*i+1;
  } if(2*i+2<n && a[2*i+2] > a[largest]){
    largest=2*i+2;
  }
  if(largest != i){
    int temp=a[i];
    a[i] = a[largest];
    a[largest] = temp;
    maxHeapify(a, largest, n);
  }
}
void modifyMintoMax(int a[], int n){
  for(int i=(n-2)/2; i>=0; i--){
    maxHeapify(a, i, n);
  }
}