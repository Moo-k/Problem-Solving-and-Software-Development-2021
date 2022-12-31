#include <iostream>
#include <cmath>
using namespace std;

class MinimalDifference{
public:
  int findNumber(int A, int B, int C){
    if (A==B){
      return A;
    }
    int least = 100000;
    int res = 0;
    int sumC = findSum(C);
    for (int i = A; i <= B; i++){
      int diff = abs(sumC-findSum(i));
      if (diff == 0){
        return i;
      } else if (diff < least){
        least = diff;
        res = i;
      }
    }
    return res;
  }
private:
  int findSum(int a){
    int sum = 0;
    while (a > 0){
      sum+=a%10;
      a/=10;
    }
    return sum;
  }
};
