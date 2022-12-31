#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class LemonGate{
public:
  int maxNumber(vector<int> lemons){
    if (lemons.size() == 1){ return lemons.at(0); }
    return max(take(lemons,0),take(lemons,1));
  }
private:
  int take(vector<int> lemons, int n){
    if (n+3 < lemons.size()){ // either skip 1 or 2 baskets, head recursively
      return lemons.at(n) + max(take(lemons, n+2),take(lemons, n+3));
    } else if (n+2 < lemons.size()){ // take last lemon (skipping 1)
      return lemons.at(n) + lemons.at(n+2);
    } else{
      return lemons.at(n);
    }
  }
};
