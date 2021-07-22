#include<sstream>
class Date
{
  // Write your code here
  private:
  	int month;
   	int day;
  public: 
  	Date(int m, int d){
      month=m;
      day=d;
    }
  int daysInMonth(){
    if(month<=7){
      if(month==2){
        return 28;
      }
      else if(month%2 == 0){
        return 30;
      } else{
        return 31;
      }
    } else{
      if(month%2 == 0){
        return 31;
      } else{
        return 30;
      }
    }
  }
  int getDay(){
    return day;
  }
  int getMonth(){
    return month;
  }
  void nextDay(){
    if(day == daysInMonth()){
      day = 1;
      month+=1;
      if(month==13){
        month=1;
      }
    }
    else{
      day+=1;
    }
  }
  string toString(){
    std::ostringstream oss;
	oss << month << "/" << day;
    return oss.str();
  }
  int absoluteDay(){
    int days=0;
    for(int i=1; i<getMonth(); i++){
      if(i<=7){
        if(i==2){
          days+=28;
        }
        else if(i%2 == 0){
          days+= 30;
        } else{
          days+= 31;
        }
      } else{
        if(i%2 == 0){
          days+= 31;
        } else{
          days+= 30;
        }
      }
    }
    days+=getDay();
    return days;
  }
};