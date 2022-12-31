#include <iostream>
#include <vector>
using namespace std;

class ColorfulRabbits{
public:
  int getMinimum(vector<int> replies){
    partialsets.clear();
    int min = 0;
    bool flag = true;
    for (int i = 0; i < replies.size(); i++){
      flag = true;
      if (!replies.at(i)){
        min++;
        flag = false;
      } else{
        for (int j = 0; j < partialsets.size(); j++){
          if (replies.at(i)==partialsets.at(j).at(0)){
            flag = false;
            partialsets.at(j).push_back(replies.at(i));
            if (partialsets.at(j).size()==replies.at(i)+1){
              min+=replies.at(i)+1;
              partialsets.erase(partialsets.begin()+j);
            }
          }
        }
      }
      if (flag){
        vector<int> temp = {replies.at(i)};
        partialsets.push_back(temp);
      }
    }
    for (int j = 0; j < partialsets.size(); j++){
      min+=partialsets.at(j).at(0)+1;
    }
    return min;
  }
private:
  vector<vector<int>> partialsets; // jagged array
};
