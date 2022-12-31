#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class DifferentStrings{
public:
  int minimize(string A, string B){
    int match = 0;
    for (int i = 0; i <= B.size()-A.size(); i++){
      int temp = 0;
      for (int j = 0; j < A.size(); j++){
        if (A.at(j) == B.at(i+j)){
          temp++;
        }
      }
      match = max(match,temp);
    }
    return A.size()-match;
  }
private:
  int getDiff(string A, string B){ // for strings of the same size
    int res = 0;
    for (int i = 0; i < A.size(); i++){
      if (A.at(i)!=B.at(i)){
        res++;
      }
    }
    return res;
  }
};
