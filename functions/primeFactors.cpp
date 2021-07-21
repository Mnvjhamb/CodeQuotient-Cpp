void primeFactors(int n){
  if(n == 1){return;}
  for(int i=2; i<=n; i++){
    if(n%i == 0){
      cout<<i<<endl;
      primeFactors(n/i);
      break;
    }
  }
}