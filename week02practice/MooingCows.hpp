#pragma once
#include <string>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

class MooingCows{
public:
  int dissatisfaction(vector<string> farmland){
    int mindis = INT_MAX;
    for (int i = 0; i < farmland.size(); i++){
      for (int j = 0; j < farmland.at(i).size(); j++){
        if (farmland.at(i).at(j)=='C'){
          int dis = 0;
          for (int k = 0; k < farmland.size(); k++){
            for (int l = 0; l < farmland.at(k).size(); l++){
              if (farmland.at(k).at(l)=='C'){
                dis=dis+pow(abs(k-i),2)+pow(abs(l-j),2);
                //cout << "dis: " << dis << endl;
              }
            }
          }
          if (dis < mindis){
            mindis = dis;
          }
          //cout << "mindis: " << mindis << endl;
        }
      }
    }
    return mindis;
  }
};
