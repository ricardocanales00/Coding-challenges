#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a = 0;
        int b = 0;
        for(int i = cost.size()-1; i>=0; i--){
            int x = 0;
            if(a<b){
                x = a+cost[i];
            } else {
                x = b+cost[i];
            }
            a = b;
            b = x;
        }
        if(a<b)
            return a;
        else
            return b;
        
    }
};



int main()
{
    Solution srchIn;
    vector<int> cost{ 10, 20, 30 }; 

    srchIn.searchInsert(cost);

    return 0;
}