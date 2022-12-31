#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class RugSizes{
public:
  int rugCount(int area){
    int count = 0;
    int loop = floor(sqrt(area));
    for (int i = 1; i <= loop; i++){
      if (area%i==0){
        if (!(i!=area/i && i%2==0 && area/i%2==0)){
          count++;
        }
      }
    }
    return count;
  }
};
