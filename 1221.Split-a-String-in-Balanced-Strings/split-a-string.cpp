#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int amount = 0, helper = 0;
        for(int x = 0; x < s.size(); x++){
            if(s[x] == 'L') helper++;
            else helper--;
            if(helper == 0) amount++;
        }
        return amount;
    }
};


int main()
{
    Solution srchIn;
    string s = "LLLLRRRR"

    srchIn.balancedStringSplit(s);

    return 0;
}