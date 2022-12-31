#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class CubeStickers{
public:
  string isPossible(vector<string> sticker){
    sort(sticker.begin(),sticker.end());
    int second = 0;
    string temp = "";
    int used = 0;
    for (int i = 0; i < sticker.size(); i++){
      if (sticker.at(i)!=temp){
        used++;
        temp = sticker.at(i);
        second = 1;
      } else if (sticker.at(i)==temp && second == 1){
        used++;
        temp = sticker.at(i);
        second = 0;
      } else{
        temp = sticker.at(i);
      }
      if (used > 5){
        return "YES";
      }
    }
    return "NO";
  }
};
