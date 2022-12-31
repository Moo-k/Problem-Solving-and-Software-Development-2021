#include <string>
#include <iostream>

using namespace std;

class SlowKeyboard{
public:
  int enterTime(string time){
    char delimiter = ':';
    string token = time.substr(0, time.find(delimiter));
    int minutes=stoi(token,nullptr,10);
    string token2 = time.substr(time.find(delimiter)+1);
    int seconds=stoi(token2,nullptr,10);
    int min = 10; // max time to key in digits
    for (int i = 4; i < 10; i++){
      seconds+=1;
      if (seconds>59){
        seconds=seconds%60;
        minutes+=1;
        if (minutes>59){
          minutes=minutes%60;
        }
      }
      int inttime = 100*minutes+seconds;
      int temptime = 4;
      string stringtime = to_string(inttime);
      while(stringtime.size()<4){
        stringtime.insert(0,"0");
      }
      for (int j = 1; j < stringtime.size(); j++){
        if (stringtime.at(j)!=stringtime.at(j-1)){
          temptime+=2;
        }
      }
      if (temptime < i){
        return temptime;
      }
    }
    return 10;
  }
};
