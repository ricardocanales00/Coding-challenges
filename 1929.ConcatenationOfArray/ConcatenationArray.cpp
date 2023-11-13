class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> resp;
        for(int i = 0; i < nums.size(); i++){
            resp.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            resp.push_back(nums[i]);
        }
        return resp;
    }
};