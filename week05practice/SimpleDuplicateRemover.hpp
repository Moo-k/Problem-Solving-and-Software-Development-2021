#include <iostream>
#include <vector>
using namespace std;

class SimpleDuplicateRemover{
public:
  vector<int> process(vector<int> sequence){
    int solved = 0;
    vector<int> result;
    while (solved == 0){
      if (sequence.size() == 0){
        solved = 1;
      }
      int last = sequence.back();
      result.insert(result.begin(),last);
      for (int i = sequence.size()-1; i >= 0; i--){
        if (sequence.at(i) == last){
          if (sequence.size()>1){
            sequence.erase(sequence.begin()+i);
          } else{
            return result;
          }
        }
      }
    }
    return result;
  }
};
