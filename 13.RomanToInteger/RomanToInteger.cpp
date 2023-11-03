class Solution {
public:
    int romanToInt(string s) {
        int calculation = 0;
        unordered_map<char, int> dictionary;
        dictionary['I'] = 1;
        dictionary['V'] = 5;
        dictionary['X'] = 10;
        dictionary['L'] = 50;
        dictionary['C'] = 100;
        dictionary['D'] = 500;
        dictionary['M'] = 1000;

        for(int x = 0; x < s.length();x++){
            if(dictionary[s[x]]< dictionary[s[x+1]]){
                calculation += (dictionary[s[x+1]] - dictionary[s[x]]);
                x++;
            } else {
            calculation += dictionary[s[x]];
            }
        }
        return calculation;
    }
};