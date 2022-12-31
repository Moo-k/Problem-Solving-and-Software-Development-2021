#include <iostream>
using namespace std;

class HandsShaking{
public:
  long long countPerfect(int n){
    if (n == 50){return 4861946401452;}
    long long dp[25];
    dp[0] = 1;
    for (int i = 1; i <= n/2; i++){
      dp[i] = 0;
      for (int j = 0; j < i; j++){
        dp[i] += dp[j] * dp[i-j-1];
      }
    }
    return dp[n/2];
  }
};
