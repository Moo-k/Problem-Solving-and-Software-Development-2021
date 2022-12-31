#include <string>
#include <iostream>
using namespace std;

class SimpleCompressor{
public:
  string uncompress (string data){
    for (int i = 0; i < data.size(); i++){
      if (data.at(i)==']'){
        int multiplier = 0;
        for (int j = i; j >= 0; j--){
          if (data.at(j)>'0' && data.at(j)<='9'){
            multiplier = data.at(j) - '0';
            string temp;
            for (int k = j+1; k < i; k++){
              temp.push_back(data.at(k));
            }
            string temp2;
            for (int k = 0; k < multiplier; k++){
              temp2.append(temp);
            }
            data = data.substr(0,j-1) + temp2 + data.substr(i+1);
            uncompress(data);
          }
        }
      }
    }
    return data;
  }
};
