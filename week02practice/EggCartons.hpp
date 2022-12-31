#pragma once
#include <iostream>
using namespace std;

class EggCartons{
public:
  int minCartons(int n){
    if (n%2!=0||n<6){
      return -1;
    }
    int cartons = 0;
    cartons = n/8;
    switch (n%8){
      case 0:
        break;
      case 2:
        if (n < 12){ // lowest case that there are multiple
          return -1;
        }
        cartons+=1;
        break;
      case 4:
        cartons+=1;
        break;
      case 6:
        cartons+=1;
        break;
      default:
        return -1;
    }
    return cartons;
  }
};
