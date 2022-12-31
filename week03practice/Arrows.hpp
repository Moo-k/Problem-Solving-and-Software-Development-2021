#include <string>
#include <iostream>
using namespace std;

class Arrows{
public:
  int longestArrow(string s){
    int longest = -1;
    for (int i = 49; i >=0 ; i--){ // if an arrow of i+1 length can be found (max length is 49 -/= + 1 arrow)
      if (s.find(string(i, '-') + ">") != string::npos){ // using string constructor to construct an arrow of length i+1 in all 4 possible iterations
        if (i > longest){
          longest = i+1;
        }
      }
      if (s.find(string(i, '=') + ">") != string::npos){
        if (i+1 > longest){
          longest = i+1;
        }
      }
      if (s.find("<" + string(i, '-')) != string::npos){
        if (i+1 > longest){
          longest = i+1;
        }
      }
      if (s.find("<" + string(i, '=')) != string::npos){
        if (i+1 > longest){
          longest = i+1;
        }
      }
    }
    return longest;
  }
};
