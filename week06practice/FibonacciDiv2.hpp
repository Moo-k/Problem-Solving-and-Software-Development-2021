#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class FibonacciDiv2{
public:
  int find(int N){
    int fib1 = 0;
    int fib2 = 1;
    
    while (fib2 < N){
      int temp = fib1 + fib2; // next fibonacci number
      fib1 = fib2;
      fib2 = temp;
    }
    
    return min(N - fib1, fib2 - N);
  }
};
