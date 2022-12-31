#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class KokoBananas{
public:
  int lastHand(vector<int> hands, int K){
    int res = 0;
    for (int i = 0; i < K; i++){
      int maxB = 0;
      int index = 0;
      for (int j = 0; j < hands.size(); j++){
        if (hands.at(j) > maxB){
          maxB = hands.at(j);
          index = j;
        }
      }
      hands.at(index)--;
      if (i == K-1){
        res = index;
      }
    }
    return res;
  }
};
