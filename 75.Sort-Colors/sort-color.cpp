#include<iostream>
#include<vector>

using namespace std;

class Solution {
    
public:
    void sortColors(vector<int>& nums) {
        int help, i, j;
        for (j = 1; j < nums.size(); j++){
        	help = nums[j];
            i = j;
            while (j > 0 && help < nums[j-1]){
            	nums[j] = nums[j-1];
                j--;
            }
            nums[j] = help;
        }   
    }
};

int main()
{
	Solution s;
	vector<int> vect;

	vect.push_back(2);
	vect.push_back(0);
	vect.push_back(2);
	vect.push_back(1);
	vect.push_back(1);
	vect.push_back(0);

	s.sortColors(vect);

	return 0;
}