int binaryToDecimal(string binary){
  int bin;
  stringstream ss;
  ss << binary;
  ss >> bin;
  int dec=0;
  int i=0;
  while(bin>0){
    dec += bin%10 * pow(2,i);
    i+=1;
    bin/=10;
  }
  return dec;
}