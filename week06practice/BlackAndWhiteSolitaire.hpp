#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BlackAndWhiteSolitaire{
public:
  int minimumTurns(string cardFront){
    cards = cardFront;
    int turns1 = 0;
    int turns2 = 0;
    for (int i = 1; i < cardFront.size(); i++){
      if (!difflast(i)){
        flipchar(i);
        turns1++;
      }
    }
    cards = cardFront;
    int flag = 0;
    for (int i = 1; i < cardFront.size(); i++){
      if (!difflast(i)){
        if (flag == 0){
          for (int j = 0; j < i; j++){
            flipchar(j);
            turns2++;
          }
          flag=1;
        } else{
          flipchar(i);
          turns2++;
        }
      }
    }
    // cout << "turns1: " << turns1 << endl;
    // cout << "turns2: " << turns2 << endl;
    return min(turns1,turns2);
  }
private:
  void flipchar(int index){
    if (index >= cards.size()){
      return;
    }
    if (cards.at(index)=='W'){
      cards.at(index) = 'B';
    } else if (cards.at(index)=='B'){
      cards.at(index) = 'W';
    }
  }
  bool difflast(int index){
    if (index == 0 || index >= cards.size()){
      return true;
    }
    if (cards.at(index)!=cards.at(index-1)){
      return true;
    }
    return false;
  }
  string cards;
};
