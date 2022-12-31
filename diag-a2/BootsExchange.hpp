#include <vector>

using namespace std;

class BootsExchange{
public:
  int leastAmount(vector<int> left, vector<int> right){ // brute force
    int matched = 0;
    for (int i = 0; i < left.size(); i++){
      for (int j = 0; j < right.size(); j++){
        if (right.at(j)==left.at(i)){
          matched++;
          right.erase(right.begin()+j);
          break;
        }
      }
    }
    return left.size()-matched;
  }
};
