#include <iostream>
#include <algorithm>
using namespace std;

class RockStar{
public:
  int getNumSongs(int ff, int fs, int sf, int ss){
    if (ff == 0 && fs == 0){
      if (sf > 0){
        return ss + 1;
      } else{
        return ss;
      }
    } else if (fs == 0){
      return ff;
    } else if (fs > sf){
      return ff + ss + 2*sf + 1;
    } else{
      return ff + fs*2 + ss; // sf after ss
    }
  }
};
