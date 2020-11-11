#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l =0, r = nums.size()-1, m;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m]==target)
                return m;
            if(nums[m]<target)
                l = m +1;
            else
                r = m-1;    
        }
        return l;
    }
};


int main()
{
    Solution srchIn;
    vector<int> nums{ 10, 20, 30 }; 
    int iInput;
    cin >> iInput;
    

    srchIn.searchInsert(nums, iInput);

    return 0;
}