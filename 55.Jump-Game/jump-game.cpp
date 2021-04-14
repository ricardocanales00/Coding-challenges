#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index = nums.size()-1;
        for(int x = nums.size()-1; x>=0; x--){
            if(index <= x+nums[x]){
                index = x;
            }
        }
        if(index == 0) return true;
        else return false;
    }
};



int main()
{
    Solution sltn;
    vector<int> nums{ 10, 20, 30 }; 
    

    sltn.canJump(nums);

    return 0;
}