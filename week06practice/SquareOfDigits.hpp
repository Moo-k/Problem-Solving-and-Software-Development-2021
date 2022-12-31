#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SquareOfDigits {
public:
  int getMax(vector<string> data) { // brute force
    int result = 0;
    for(int i=0; i<data.size(); i++){
      for(int j=0; j<data.at(0).size(); j++){
        for(int a=0; a<50; a++){
          if(i+a >= data.size() || j+a >= data.at(0).size()){
            break;
          }
          if(data[i][j] == data[i+a][j] && data[i][j] == data[i+a][j+a] && data[i][j] == data[i][j+a]){
            if((a+1)*(a+1) > result){
              result = (a+1)*(a+1);
            }
          }
        }
      }
    }
    return result;
  }
};
