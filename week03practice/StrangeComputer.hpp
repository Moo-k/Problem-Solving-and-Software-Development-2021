#include <string>
using namespace std;

class StrangeComputer{
public:
  	int setMemory(string mem)
    {
      char temp = '0';
      unsigned int flips = 0;
      for (int i = 0; i < mem.size(); i++){
        if (mem.at(i)!=temp){
          flips++;
          if (temp == '0'){
            temp = '1';
          } else{
            temp = '0';
          }
        }
      }
      return flips;
    }
};
