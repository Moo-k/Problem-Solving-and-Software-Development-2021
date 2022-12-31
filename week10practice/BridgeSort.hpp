#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class BridgeSort{
public:
  string sortedHand(string hand){
    vector<string> clubs;
    vector<string> diamonds;
    vector<string> hearts;
    vector<string> spades;
    for (int i = 0; i < hand.size(); i+=2){
      string token (hand.substr(i,2));
      switch(token.front()){
        case 'C':
          clubs.push_back(token);
          break;
        case 'D':
          diamonds.push_back(token);
          break;
        case 'H':
          hearts.push_back(token);
          break;
        case 'S':
          spades.push_back(token);
          break;
      }
    }

    sort(clubs.begin(),clubs.end());
    sort(diamonds.begin(),diamonds.end());
    sort(hearts.begin(),hearts.end());
    sort(spades.begin(),spades.end());

    for (int i = 0; i < clubs.size(); i++){ if (clubs.at(i) == "CT"){ clubs.erase(clubs.begin()+i); clubs.push_back("CT"); break; } }
    for (int i = 0; i < clubs.size(); i++){ if (clubs.at(i) == "CJ"){ clubs.erase(clubs.begin()+i); clubs.push_back("CJ"); break; } }
    for (int i = 0; i < clubs.size(); i++){ if (clubs.at(i) == "CQ"){ clubs.erase(clubs.begin()+i); clubs.push_back("CQ"); break; } }
    for (int i = 0; i < clubs.size(); i++){ if (clubs.at(i) == "CK"){ clubs.erase(clubs.begin()+i); clubs.push_back("CK"); break; } }
    for (int i = 0; i < clubs.size(); i++){ if (clubs.at(i) == "CA"){ clubs.erase(clubs.begin()+i); clubs.push_back("CA"); break; } }

    for (int i = 0; i < diamonds.size(); i++){ if (diamonds.at(i) == "DT"){ diamonds.erase(diamonds.begin()+i); diamonds.push_back("DT"); break; } }
    for (int i = 0; i < diamonds.size(); i++){ if (diamonds.at(i) == "DJ"){ diamonds.erase(diamonds.begin()+i); diamonds.push_back("DJ"); break; } }
    for (int i = 0; i < diamonds.size(); i++){ if (diamonds.at(i) == "DQ"){ diamonds.erase(diamonds.begin()+i); diamonds.push_back("DQ"); break; } }
    for (int i = 0; i < diamonds.size(); i++){ if (diamonds.at(i) == "DK"){ diamonds.erase(diamonds.begin()+i); diamonds.push_back("DK"); break; } }
    for (int i = 0; i < diamonds.size(); i++){ if (diamonds.at(i) == "DA"){ diamonds.erase(diamonds.begin()+i); diamonds.push_back("DA"); break; } }

    for (int i = 0; i < hearts.size(); i++){ if (hearts.at(i) == "HT"){ hearts.erase(hearts.begin()+i); hearts.push_back("HT"); break; } }
    for (int i = 0; i < hearts.size(); i++){ if (hearts.at(i) == "HJ"){ hearts.erase(hearts.begin()+i); hearts.push_back("HJ"); break; } }
    for (int i = 0; i < hearts.size(); i++){ if (hearts.at(i) == "HQ"){ hearts.erase(hearts.begin()+i); hearts.push_back("HQ"); break; } }
    for (int i = 0; i < hearts.size(); i++){ if (hearts.at(i) == "HK"){ hearts.erase(hearts.begin()+i); hearts.push_back("HK"); break; } }
    for (int i = 0; i < hearts.size(); i++){ if (hearts.at(i) == "HA"){ hearts.erase(hearts.begin()+i); hearts.push_back("HA"); break; } }

    for (int i = 0; i < spades.size(); i++){ if (spades.at(i) == "ST"){ spades.erase(spades.begin()+i); spades.push_back("ST"); break; } }
    for (int i = 0; i < spades.size(); i++){ if (spades.at(i) == "SJ"){ spades.erase(spades.begin()+i); spades.push_back("SJ"); break; } }
    for (int i = 0; i < spades.size(); i++){ if (spades.at(i) == "SQ"){ spades.erase(spades.begin()+i); spades.push_back("SQ"); break; } }
    for (int i = 0; i < spades.size(); i++){ if (spades.at(i) == "SK"){ spades.erase(spades.begin()+i); spades.push_back("SK"); break; } }
    for (int i = 0; i < spades.size(); i++){ if (spades.at(i) == "SA"){ spades.erase(spades.begin()+i); spades.push_back("SA"); break; } }

    string res = "";
    for (int i = 0; i < clubs.size(); i++){
      res+=clubs.at(i);
    }
    for (int i = 0; i < diamonds.size(); i++){
      res+=diamonds.at(i);
    }
    for (int i = 0; i < hearts.size(); i++){
      res+=hearts.at(i);
    }
    for (int i = 0; i < spades.size(); i++){
      res+=spades.at(i);
    }
    return res;
  }
};
