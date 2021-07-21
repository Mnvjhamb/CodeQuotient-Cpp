int gcd(int i, int j){
  // Write your code here
  int min, max;
  if(i<j){
    min=i;
    max=j;
  } else{
    min=j;
    max=i;
  }
  if(max%min == 0){
    return min;
  }
  return gcd(min, max%min);
}