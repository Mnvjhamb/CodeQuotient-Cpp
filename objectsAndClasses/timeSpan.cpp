#include<sstream>
class TimeSpan
{
  private:
  int hour;
  int min;
  public:
  TimeSpan(int hours, int minutes){
    hour=hours;
    min=minutes;
  }
  int getHours(){
    return hour;
  }
  int getMinutes(){
    return min;
  }
  void add(int hours, int minutes){
    hour+=hours;
    min+=minutes;
    while(min>=60){
      min-=60;
      hour+=1;
    }
  }
  void add(TimeSpan tp){
    add(tp.getHours(), tp.getMinutes());
  }
  double getTotalHours(){
    return hour+double(min)/60;
  }
  string toString(){
    std::ostringstream oss;
	oss << hour << " Hours, " << min << " Minutes";
    return oss.str();
  }
};