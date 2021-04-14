#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        for(int x = size-1; x >= 0; x--){
            for(int y = 0; y < x; y++){
                if(triangle[x][y] < triangle[x][y+1]){
                    triangle[x-1][y] = triangle[x-1][y]+triangle[x][y];
                } else {
                    triangle[x-1][y]=triangle[x-1][y]+triangle[x][y+1];
                }
            }
        }
        return triangle[0][0];
    }
};




int main()
{
    Solution sltn;
    vector<vector< int>> nums = [[2],[3,4],[6,5,7],[4,1,8,3]]
    

    sltn.minimumTotal(nums);

    return 0;
}