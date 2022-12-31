#include <iostream>
using namespace std;

class Multiples{
public:
  int number(int min, int max, int factor){
    if (min==max){
      if (min%factor == 0){
        return 1;
      } else{
        return 0;
      }
    }
    int res = 0;
    for (int i = min; i <= max; i++){
      if (i%factor == 0){
        res++;
      }
    }
    return res;
  }
};
