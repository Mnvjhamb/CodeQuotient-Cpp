int cnt=0;	// manipluate this variable in your code
class Counter
{ 
  public: 
  Counter(){
    cnt++;
  }
  ~ Counter(){
    cnt--;
  }
};