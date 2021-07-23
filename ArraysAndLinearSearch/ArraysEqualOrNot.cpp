int arraysEqualorNot(vector<int> A, vector<int> B) {
  // Write your code here
  for(int i=0; i<A.size(); i++){
    bool found=false;
    for(int j=0; j<B.size(); j++){
      if(B[j] == A[i]){
        B[j] = -1;
        found=true;
        break;
      }
    }
    if(!found){
      return 0;
    }
  }
  return 1;
}