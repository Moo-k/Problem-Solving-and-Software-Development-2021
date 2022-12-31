#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MagicSpell{
public:
  string fixTheSpell(string spell){
    vector<int> indexes;
    string chars;
    for (int i = 0; i < spell.size(); i++){
      if (spell.at(i)=='A'||spell.at(i)=='Z'){
        chars+=spell.at(i);
        indexes.push_back(i);
      }
    }
    for (int i = 0; i < indexes.size(); i++){
      spell.at(indexes.at(i)) = chars.back();
      chars.pop_back();
    }
    return spell;
  }
};
