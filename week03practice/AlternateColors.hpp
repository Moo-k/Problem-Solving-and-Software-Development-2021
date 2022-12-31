#pragma once
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class AlternateColors{
public:
  string getColor(long r, long g, long b, long k){
    long least = min(r,g);
    least = min(least,b);
    if (least*3 >= k){
      switch (k%3){
        case 0:
          return "BLUE";
        case 1:
          return "RED";
        case 2:
          return "GREEN";
      }
    } else{
      k-=least*3;
      r-=least;
      g-=least;
      b-=least;
    }
    if (b==0&&r==0){ // case 1 remaining
      return "GREEN";
    } else if (b==0&&g==0){
      return "RED";
    } else if (r==0&&g==0){
      return "BLUE";
    }
    // cout << "r: " << r << ", g: " << g << ", b: " << b << ", k: " << k << endl;
    if (r==0){
      least = min(g,b);
      if (least*2 >= k){
        switch (k%2){
          case 0:
            return "BLUE";
          case 1:
            return "GREEN";
        }
      } else{
        if (k/2 >= g){
          return "BLUE";
        } else{
          return "GREEN";
        }
      }
    } else if (g==0){
      least = min(r,b);
      if (least*2 >= k){
        switch (k%2){
          case 0:
            return "BLUE";
          case 1:
            return "RED";
        }
      } else{
        if (k/2 >= r){
          return "BLUE";
        } else{
          return "RED";
        }
      }
    } else if (b==0){
      least = min(r,g);
      if (least*2 >= k){
        switch (k%2){
          case 0:
            return "GREEN";
          case 1:
            return "RED";
        }
      } else{
        if (k/2 >= r){
          return "GREEN";
        } else{
          return "RED";
        }
      }
    }
    return "AAAAAAAA";
  }
};
