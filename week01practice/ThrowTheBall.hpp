#pragma once
#include <iostream>

using namespace std;

class ThrowTheBall{
  public:
  int timesThrown(int N, int M, int L){ // N - number of people, M - max number of receives, L - positions passed
    if (M<=1){
      return 0;
    }
    int array[N]; // array storing how many times each player has held the ball
    for (int i=0;i<N;i++){ //create empty array
      array[i]=0;
    }
    int index=0;
    int held=0;

    while (array[index]<M){
      array[index]+=1;
      if (array[index]==M){
        break;
      }
      if (array[index]%2==0){
        index+=L;
        index=index%(N);
      } else{
        index-=L;
        while (index<0){
          index+=N;
        }
      }
      held++;
    }
    return held;
  }
};
