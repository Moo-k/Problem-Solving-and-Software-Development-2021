#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Thimbles{
public:
  int thimbleWithBall(vector<string> swaps){
    string pos = "1";
    for (int i = 0; i < swaps.size(); i++){
      if (swaps.at(i).substr(0,1) == pos){
        pos = swaps.at(i).substr(2,1);
      } else if (swaps.at(i).substr(2,1) == pos){
        pos = swaps.at(i).substr(0,1);
      }
    }
    return stoi(pos);
  }
};
