#include <vector>

using namespace std;

class SumOfPower{
public:
  int findSum(vector<int> array){ // brute force
    int sum = 0;
    int total = 0;
    for (int i = 0; i < array.size(); i++){
      for (int j = i; j < array.size()+1; j++){
        if (i == j){
          sum+=array.at(i);
        }
        for (int k = i; k < j; k++){
          sum += array.at(k);
        }
      }
      total+=array.at(i);
    }
    return sum-total;
  }
};
