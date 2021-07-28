void printNextGreaterElement(int arr[],int n){
  // Write your code here
  for(int i=0; i<n-1; i++){
    int j;
    bool found=true;
    for(j=i+1; arr[j] <= arr[i]; j++){
      if(j==n-1) found=false;
    };
    if(found) cout<<arr[j]<<" ";
    else cout<<-1<<" ";
  }
  cout<<-1;
}