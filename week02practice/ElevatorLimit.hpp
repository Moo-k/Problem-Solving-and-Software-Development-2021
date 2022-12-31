#pragma once
#include <vector>

using namespace std;

class ElevatorLimit{
public:
  vector<int> getRange(vector<int> enter, vector<int> exit, int physicalLimit){
    vector<int> out;
    int ppl = 0;
    int min = 0;
    int max = 0;
    for (int i = 0; i < enter.size(); i++){
      ppl-= exit.at(i);
      if (ppl<min){
        min = ppl;
      }
      ppl+= enter.at(i);
      if (ppl>max){
        max = ppl;
      }
    }
    max = physicalLimit-max;
    min = -min;
    if (min>max){
      return out;
    } else{
      out.push_back(min);
      out.push_back(max);
      return out;
    }
  }
};
