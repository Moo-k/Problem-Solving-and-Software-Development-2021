#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

class ChangingString{
public:
  int distance(string A, string B, int K){
    vector<int> dist;
    int total = 0;
    for (int i = 0; i < A.size(); i++){
      dist.push_back(abs(A.at(i)-B.at(i)));
      total+=abs(A.at(i)-B.at(i));
    }
    int maxK = 0;
    for (int i = 0; i < K; i++){
      int temp = 0;
      int index = 0;
      for (int j = 0; j < dist.size(); j++){
        if (dist.at(j)>temp){
          index = j;
          temp = dist.at(j);
        }
      }
      if (temp == 0){ // if same value (0 dist), set temp to -1 (add 1)
        temp = -1;
      }
      dist.at(index) = 0;
      maxK += temp;
    }
    
    return total-maxK;
  }
};
