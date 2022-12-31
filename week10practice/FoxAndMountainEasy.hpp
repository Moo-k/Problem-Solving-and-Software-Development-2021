#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class FoxAndMountainEasy{
public:
  string possible(int n, int h0, int hn, string history){
    int temp = h0;
    for (int i = 0; i < history.size(); i++){
      if (history.at(i) == 'U'){
        temp++;
      } else if (history.at(i) == 'D'){
        temp--;
      }
    }
    int remainingsteps = n-history.size();
    if (remainingsteps <= abs(temp) && temp < 0){ return "NO"; }
    if (remainingsteps < abs(hn-temp)){ return "NO"; }
    if (remainingsteps)
    for (int i = 0; i < remainingsteps; i++){
      if (temp <= hn){
        temp++;
      } else if (temp > hn){
        temp--;
        if (temp < 0){ return "NO"; }
      }
    }
    if (temp != hn){ return "NO"; }
    return "YES";
  }
};
