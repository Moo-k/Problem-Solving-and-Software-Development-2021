#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TaliluluCoffee{
public:
  int maxTip(vector<int> tips){ // greedy: take highest tips first
    sort(tips.begin(),tips.end(),greater<int>());
    int res = 0;
    for (int i = 0; i < tips.size(); i++){
      if (tips.at(i)-i<=0){
        return res;
      }
      res+=tips.at(i)-i;
    }
    return res;
  }
};
