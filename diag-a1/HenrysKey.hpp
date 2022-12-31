#include <string>

using namespace std;

class HenrysKey{
public:
  int howMany(string S){
    char lastchar = '\0';
    int out = 0;
    for (int i = 0; i < S.size(); i++){
      if (S.at(i)!=lastchar){
        out++;
        lastchar=S.at(i);
      }
    }
    return out;
  }
};
