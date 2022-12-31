#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class RGBStreet{
public:
  int estimateCost(vector<string> houses) 
  { 
    int prices[20][3] ;
    for(int i=0; i<houses.size(); i++){
      size_t pos = 0;
      string temp;
      int index = 0;
      while ((pos = houses.at(i).find(" ")) != string::npos && index < 2) {
        // cout << "pos: " << pos << endl;
        temp = houses.at(i).substr(0, pos);
        houses.at(i).erase(0,pos+1);
        // cout << "temp: " << temp << endl;
        prices[i][index++]=stoi(temp);
      }
      prices[i][2] = stoi(houses.at(i));
    }


    int table[20][3];
    for(int i=0; i<3; i++){
      table[0][i] = prices[0][i];
    }

    for(int i=1; i<houses.size(); i++){
      table[i][0] = prices[i][0] + min(table[i-1][1], table[i-1][2]); // if current index is painted R, which color should previous index be to be the cheapest
      table[i][1] = prices[i][1] + min(table[i-1][0], table[i-1][2]);
      table[i][2] = prices[i][2] + min(table[i-1][0], table[i-1][1]);      
    }
    return min(min(table[houses.size()-1][0], table[houses.size()-1][1]), table[houses.size()-1][2]) ;
  }
};
