class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultado;
        for(int i = 0; i < nums.size(); i++){
            for(int x = i + 1; x < nums.size(); x++){
                if(nums[i] + nums[x] == target){
                    resultado.push_back(i);
                    resultado.push_back(x);
                }
            }
        }
        return resultado;
    }
};