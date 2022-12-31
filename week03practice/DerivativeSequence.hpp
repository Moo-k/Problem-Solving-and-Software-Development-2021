#pragma once
#include <iostream>
#include <vector>
using namespace std;

class DerivativeSequence{
public:
  vector<int> derSeq(vector<int> a, int n){
    for (int i=0;i<n;i++){
      vector<int> temp;
      for (int j=0;j<a.size()-1;j++){
        int l=a.at(j+1)-a.at(j);
        temp.push_back(l);
      }
      a = temp;
    }
    return a;
  }
};
