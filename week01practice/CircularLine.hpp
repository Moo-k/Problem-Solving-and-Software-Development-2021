#pragma once
#include <vector>

using namespace std;

class CircularLine{
public:
  int longestTravel(vector<int> t){ // bruuuuuute force
    int arrlength = t.size();
    int totaltime=0;
    int longest=0;
    for(int i=0; i<arrlength; i++){
      totaltime+=t[i];
    }
    for(int i=0;i<arrlength;i++){
      for(int j=i+1;j<arrlength;j++){
        int sum=0;
        for(int k=i;k<j;k++){
          sum+=t[k];
        }
        if (sum > totaltime-sum){
          sum = totaltime-sum;
        }
        if (longest < sum){
          longest = sum;
        }
      }
    }
    return longest;
  }
};
