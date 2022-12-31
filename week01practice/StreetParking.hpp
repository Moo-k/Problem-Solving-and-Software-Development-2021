#pragma once
#include <string>
#include <iostream>

using namespace std;

class StreetParking{
public:
	int freeParks(string street){
		int spots = 0;
    if (street.size()==1 && street.at(0)=='-'){
      return 1;
    }
		for (int i = 0; i < street.size(); i++){
      // cout << street.at(i) << endl;
      if (street.at(i)=='S'|street.at(i)=='D'|street.at(i)=='B'){
        // cout << "index: " << i << " is " << street.at(i) << endl;
        continue;
      } else if (i<street.size()-2 && street.at(i+2)=='B'){
        // cout << "index: " << i << "bus -2" << endl;
        continue;
      } else if (i>0 && street.at(i-1)=='S'){
        // cout << "index: " << i << "street +1" << endl;
        continue;
      } else if (i<street.size()-1 && street.at(i+1)!='-'){
        if (street.at(i+1)=='S'|street.at(i+1)=='B'){
          // cout << "index: " << i << "street/bus -1" << endl;
          continue;
        } else if (street.at(i)=='-'){
          // cout << "index: " << i << endl;
          spots++;
        }
      } else{
        // cout << "index: " << i << endl;
        spots++;
      }
		}
		return spots;
	}
};
