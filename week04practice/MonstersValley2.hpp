#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class MonstersValley2{
public:
  int minimumPrice(vector<int> dread, vector<int> price){
    return minimumPrice2(dread,price,0,0);
  }
private:
  int minimumPrice2(vector<int> dread, vector<int> price, long long currentDread, int index){
    if (index >= dread.size()){
      return 0;
    }
    if (currentDread < dread.at(index)){
      return price.at(index) + minimumPrice2(dread, price, currentDread+dread.at(index), index+1);
    }
    else {
      return min(price.at(index) + minimumPrice2(dread, price, currentDread+dread.at(index), index+1), minimumPrice2(dread, price, currentDread, index+1));
    }
  }
};
