#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class CountExpressions{ // aabb abab abba baab baba bbaa
public:
  int calcExpressions(int x, int y, int val){
    solutions = 0;
    target = val;
    vector<int> a1 = {x,x,y,y};
    vector<int> a2 = {x,y,x,y};
    vector<int> a3 = {x,y,y,x};
    vector<int> a4 = {y,x,x,y};
    vector<int> a5 = {y,x,y,x};
    vector<int> a6 = {y,y,x,x};
    for (int i = 0; i < 3; i++){
      calc2(a1,0,i);
      calc2(a2,0,i);
      calc2(a3,0,i);
      calc2(a4,0,i);
      calc2(a5,0,i);
      calc2(a6,0,i);
    }
    return solutions/3;
  }
private:
  int solutions, target;
  void calc2(vector<int> remaining, int currentval, int operation){
    if (remaining.size()==0){
      if (currentval == target){
        solutions++;
      }
    } else if (remaining.size()==4){
      currentval = remaining.back();
      remaining.pop_back();
      calc2(remaining, currentval, operation);
    } else if (remaining.size() < 4){
      switch (operation){
        case 0:
          currentval += remaining.back();
          remaining.pop_back();
          for (int i = 0; i < 3; i++){
            calc2(remaining, currentval, i);
          }
          break;
        case 1:
          currentval -= remaining.back();
          remaining.pop_back();
          for (int i = 0; i < 3; i++){
            calc2(remaining, currentval, i);
          }
          break;
        case 2:
          currentval *= remaining.back();
          remaining.pop_back();
          for (int i = 0; i < 3; i++){
            calc2(remaining, currentval, i);
          }
          break;
        default:
          cerr << "ERROR" << endl;
          break;
      }
    }
  }
};
