#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class RoughStrings{
public:
  int minRoughness(string s, int n){
    int count[26] = {};
    for (int i = 0; i < s.size(); i ++){
      count[s.at(i)-'a']++;
    }
    int res = 48; // max diff
    for (int i = 0; i <= 50; i++){
      for (int j = i; j <= 50; j++){
        int temp = 0;
        for (int k = 0; k < 26; k ++){
          if (count[k] < i){
            temp += count[k];
          } else if (count[k] > j){
            temp += (count[k]-j);
          }
        }
        if (temp <= n){
          res = min(res, (j-i));
        }
      }
    }
    return res;
  }
};

/*
roughstrings:
using dynamic programming, we can first find the frequency of each letter, storing the number of occurences of each letter in their respective positons in an array of size 26.
then, using brute force, we can check if the number of removals required is less than the number of removals allowed (n). if it is less than the allowed amount, we compare the difference with the current best answer to get the smallest difference so far. at the end of the double for loop, the minimum result is returned.
*/
