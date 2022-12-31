#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class CatGame{
public:
  int getNumber(vector<int> coordinates, int x){
    if (coordinates.size()<=1){
      return 0;
    }
    sort(coordinates.begin(),coordinates.end());
    for (int i = 0; i < coordinates.size(); i++){
      cout << coordinates.at(i) << " ";
    }
    cout << endl;
    int left = coordinates.front();
    int ogleft = left;
    int right = coordinates.back();
    int ogright = right;
    cout << "left: " << left << ", right: " << right << endl;
    int res = min(right-left,abs(right-left-2*x));
    if (abs(right-left-2*x)<right-left){
      left+=x;
      right-=x;
      if (right < left){
        swap(left,right);
      }
    } else{
      return res;
    }
    cout << "left: " << left << ", right: " << right << endl;
    for (int i = 1; i < coordinates.size()-1; i++){
      if (coordinates.at(i)+x<right || coordinates.at(i)-x>left){
        continue;
      } else if (abs(coordinates.at(i)-x-left) > abs(coordinates.at(i)+x-right)){
        right = coordinates.at(i)+x;
        cout << "left: " << left << ", right: " << right << endl;
      } else{
        left = coordinates.at(i)-x;
        cout << "left: " << left << ", right: " << right << endl;
      }
    }
    return right-left;
  }
};
