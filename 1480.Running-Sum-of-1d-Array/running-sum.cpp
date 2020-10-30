#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void print(vector<int> vec){
        for (int i = 0; i < vec.size(); ++i)
        {
            cout << vec[i]<<endl;
        }
    }

    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums;
        for(int i = 0; i< nums.size(); i++){
            if(i==0)
                sums.push_back(nums[i]);
            else
                sums.push_back(sums.back()+nums[i]);
        }
        print(sums);
    return sums;
    }

    
};

int main()
{
    Solution s;

    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);

    
    s.runningSum(vect);
    return 0;
}