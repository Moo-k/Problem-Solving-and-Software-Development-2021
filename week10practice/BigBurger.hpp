#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class BigBurger{
public:
  int maxWait(vector<int> arrival, vector<int> service){
    int res = 0;
    int timesofar = arrival.front()+service.front();
    for (int i = 1; i < service.size(); i++){ // first customer never needs to wait
      if (arrival.at(i) < timesofar){
        res = max(res, timesofar-arrival.at(i));
        timesofar+=service.at(i);
      } else{
        timesofar = arrival.at(i)+service.at(i);
      }
    }
    return res;
  }
};
