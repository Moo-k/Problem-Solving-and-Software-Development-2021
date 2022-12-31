#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Barbecue{
public:
  int eliminate(int n, vector<int> voter, vector<int> excluded){
    vector<int> voted(n);
		vector<int> votes(n);
		for(int i = 0; i< voter.size(); i++){
			voted[voter.at(i)]++;
			votes[excluded.at(i)]++;
		}

		int maxVotes = votes[0];
		int maxIndex = 0;
		for(int i=1; i<n; i++){
			if(votes[i]==maxVotes){
				if(voted[i]>voted[maxIndex]){
					maxVotes = votes[i];
					maxIndex = i;
				}
      } else if(votes[i]>maxVotes){
				maxVotes = votes[i];
				maxIndex = i;
			}
		}
		return maxIndex;
  }
};
