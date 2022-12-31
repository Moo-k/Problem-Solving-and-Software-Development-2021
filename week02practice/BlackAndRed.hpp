#include <string>
#include <iostream>


using namespace std;

class BlackAndRed{
public:
  int cut(string deck){
    for (int i = 0; i < deck.size(); i++){
      string temp = deck;
      if (i > 0){
        temp = deck.substr(i)+deck.substr(i,deck.size()-i+1);
      }
      int red = 0;
      int black = 0;
      for (int j = 0; j < temp.size(); j++){
        if (temp.at(j)=='R'){
          red++;
          if (red > black){
            break;
          }
        } else{
          black++;
        }
        if (j==temp.size()-1){
          return i;
        }
      }
    }
    return 0;
  }
};
