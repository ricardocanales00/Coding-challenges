#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int teams = 0;
        for (int x = 0; x < rating.size(); ++x) {
            for (int j = 0; j < x; ++j) {
                for (int k = 0; k < j; ++k) {
                    if (rating[x] < rating[j] && rating[j] < rating[k]){
                    teams++;
                    }
                    else if(rating[x] > rating[j] && rating[j] > rating[k]){teams++;
                        
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        return teams;
    }
};

int main()
{
	vector<int> vect;
	Solution s;

	vect.push_back(2);
	vect.push_back(5);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(1);

	cout << s.numTeams(vect)<<endl;

	return 0;
}