#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CorporationSalary{
public:
  long totalSalary(vector<string> relations){
    long dp[50] = {0};
    string poor = string(relations.size(),'N');
    int calculated = 0;
    vector<int> poors;

    for (int i = 0; i < relations.size(); i++){
      if (relations.at(i) == poor){
        dp[i] = 1;
        calculated++;
        poors.push_back(i);
      }
    }

    while (calculated < relations.size()){
      int temp = poors.size();
      // cout << "poors: " << endl;
      // for (int k = 0; k < poors.size(); k++){
      //   cout << poors.at(k) << endl;
      // }
      // cout << "relations: " << endl;
      // for (int k = 0; k < relations.size(); k++){
      //   cout << relations.at(k) << endl;
      // }
      for (int i = 0; i < relations.size(); i++){
        for (int j = 0; j < poors.size(); j++){
          if (relations.at(i).at(poors.at(j)) == 'Y'){
            // cout << poors.at(0);
            relations.at(i).at(poors.at(j)) = 'N';
            dp[i]+=dp[poors.at(j)];
            if (relations.at(i) == poor){
              poors.push_back(i);
              calculated++;
            }
          }
        }
      }
      for (int i = 0; i < temp; i++){
        poors.erase(poors.begin());
      }
      // cout << "poors: " << endl;
      // for (int k = 0; k < poors.size(); k++){
      //   cout << poors.at(k) << endl;
      // }
      // cout << "relations: " << endl;
      // for (int k = 0; k < relations.size(); k++){
      //   cout << relations.at(k) << endl;
      // }
    }

    long res = 0;
    for (int i = 0; i < relations.size(); i++){
      // cout << dp[i] << endl;
      res+=dp[i];
    }
    return res;
  }
};
