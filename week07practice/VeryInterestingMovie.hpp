#include <iostream>
#include <string>
#include <vector>
using namespace std;

class VeryInterestingMovie{
public:
  int maximumPupils(vector<string> seats){
    int res = 0;
    for (int i = 0; i < seats.size(); i++){
      for (int j = 0; j < seats.at(0).size(); j++){
        if (seats.at(i).at(j)=='Y'){
          res++;
          j++; // skip 1 seat
        }
      }
    }
    return res;
  }
};
