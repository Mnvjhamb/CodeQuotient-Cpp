void moveElements(int arr[], int n){ 
  int res[n];
  int ind=0;
  for(int i=0; i<n; i++){
    if(arr[i]>=0){
      res[ind]=arr[i];
      ind++;
    }
  }
  for(int i=0; i<n; i++){
    if(arr[i]<0){
      res[ind]=arr[i];
      ind++;
    }
  }
  for(int i=0; i<n; i++){
    arr[i] = res[i];
  }
}