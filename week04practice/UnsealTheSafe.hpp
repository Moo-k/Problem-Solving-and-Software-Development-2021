#include <iostream>
#include <vector>
using namespace std;

class UnsealTheSafe{
public:
  vector<vector<int>> v = {{7},{2,4},{1,3,5},{2,6},{1,5,7},{2,4,6,8},{3,5,9},{0,4,8},{5,7,9},{6,8}};
  long countPasswords(int N){
    long combinations = 0;
    long table[31][10];
    for(int i = 0; i < 10; i++){
      table[1][i]=1;
    }
    for(int i = 2; i <= N; i++){ // count up
      table[i][0]=table[i-1][7];
      table[i][1]=table[i-1][2]+table[i-1][4];
      table[i][2]=table[i-1][1]+table[i-1][3]+table[i-1][5];
      table[i][3]=table[i-1][2]+table[i-1][6];
      table[i][4]=table[i-1][1]+table[i-1][5]+table[i-1][7];
      table[i][5]=table[i-1][2]+table[i-1][4]+table[i-1][6]+table[i-1][8];
      table[i][6]=table[i-1][3]+table[i-1][5]+table[i-1][9];
      table[i][7]=table[i-1][4]+table[i-1][8]+table[i-1][0];
      table[i][8]=table[i-1][5]+table[i-1][7]+table[i-1][9];
      table[i][9]=table[i-1][6]+table[i-1][8];
    }
    for(int i=0; i<=9; i++){
      combinations+=table[N][i];
    }
    return combinations;
  }
// public:
//   long countPasswords(int N){
//     long combinations = 0;
//     for (int i = 0; i < 10; i++){
//       combinations+=helper(N,1,i);
//     }
//     cout << calls << " calls made for input " << N << endl;
//     return combinations;
//   }
// private:
//   long helper(int numbersLeft, long currentCombinations, int currentDigit){
//     calls++;
//     if (numbersLeft == 1){
//       return currentCombinations;
//     }
//     switch (currentDigit){
//       case 0:
//         return helper(numbersLeft-1,currentCombinations,7);
//         break;
//       case 1:
//         return helper(numbersLeft-1,currentCombinations,2)+helper(numbersLeft-1,currentCombinations,4);
//         break;
//       case 2:
//         return helper(numbersLeft-1,currentCombinations,1)+helper(numbersLeft-1,currentCombinations,3)+helper(numbersLeft-1,currentCombinations,5);
//         break;
//       case 3:
//         return helper(numbersLeft-1,currentCombinations,2)+helper(numbersLeft-1,currentCombinations,6);
//         break;
//       case 4:
//         return helper(numbersLeft-1,currentCombinations,1)+helper(numbersLeft-1,currentCombinations,5)+helper(numbersLeft-1,currentCombinations,7);
//         break;
//       case 5:
//         return helper(numbersLeft-1,currentCombinations,2)+helper(numbersLeft-1,currentCombinations,4)+helper(numbersLeft-1,currentCombinations,6)+helper(numbersLeft-1,currentCombinations,8);
//         break;
//       case 6:
//         return helper(numbersLeft-1,currentCombinations,3)+helper(numbersLeft-1,currentCombinations,5)+helper(numbersLeft-1,currentCombinations,9);
//         break;
//       case 7:
//         return helper(numbersLeft-1,currentCombinations,0)+helper(numbersLeft-1,currentCombinations,4)+helper(numbersLeft-1,currentCombinations,8);
//         break;
//       case 8:
//         return helper(numbersLeft-1,currentCombinations,5)+helper(numbersLeft-1,currentCombinations,7)+helper(numbersLeft-1,currentCombinations,9);
//         break;
//       case 9:
//         return helper(numbersLeft-1,currentCombinations,6)+helper(numbersLeft-1,currentCombinations,8);
//         break;
//       default:
//         cerr << "AAAAAAAAAAAAAA" << endl;
//     }
//     return currentCombinations;
//   }
};
