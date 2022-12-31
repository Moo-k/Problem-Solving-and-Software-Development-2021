#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DinnerLighting{
public:
  int countDarkSquares(int R, int C, vector<string> roomPlan){
    for (int i = 0; i < R; i++){
      for (int j = 0; j < C; j++){
        if (roomPlan.at(i).at(j) == 'O'){
          for (int k = i-1; k >= 0; k--){ // up
            if (roomPlan.at(k).at(j) == '.' | roomPlan.at(k).at(j) == '*'){
              roomPlan.at(k).at(j) = '*';
            } else{
              break;
            }
          }
          for (int k = i+1; k < R; k++){ // down
            if (roomPlan.at(k).at(j) == '.' | roomPlan.at(k).at(j) == '*'){
              roomPlan.at(k).at(j) = '*';
            } else{
              break;
            }
          }
          for (int k = j-1; k >= 0; k--){ // left
            if (roomPlan.at(i).at(k) == '.' | roomPlan.at(i).at(k) == '*'){
              roomPlan.at(i).at(k) = '*';
            } else{
              break;
            }
          }
          for (int k = j+1; k < C; k++){ // right
            if (roomPlan.at(i).at(k) == '.'  | roomPlan.at(i).at(k) == '*'){
              roomPlan.at(i).at(k) = '*';
            } else{
              break;
            }
          }
        }
      }
    }
    // for (int i = 0; i < R; i++){
    //   cout << roomPlan.at(i) << endl;
    // }
    return count(R,C,roomPlan);
  }
private:
  int count(int R, int C, vector<string> roomPlan){
    int res = 0;
    for (int i = 0; i < R; i++){
      for (int j = 0; j < C; j++){
        if (roomPlan.at(i).at(j) == '.'){
          res++;
        }
      }
    }
    return res;
  }
};
