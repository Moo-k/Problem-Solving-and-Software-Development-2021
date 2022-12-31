#pragma once
#include <iostream>
#include <vector>
using namespace std;

class ChickenAndSheep{
public:
  vector<int> howMany(int heads, int legs){
    vector<int> res;
    if (legs > heads*4 || legs < heads*2 || legs%2!=0){
      return res;
    }
    int sheep = 0;
    int chicken = 0;
    int a = 0;
    a = 2*heads;// all chickens
    int leftover = legs - a;
    sheep = leftover/2;
    chicken = heads - sheep;
    res.push_back(chicken);
    res.push_back(sheep);
    return res;
  }
};
