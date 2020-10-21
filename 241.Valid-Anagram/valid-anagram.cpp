#include<iostream>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		//Ordering
		sort(s.begin(), s.end()); sort(t.begin(), t.end());
		
		if(s == t)
			return true;
		else
			return false;
	}
};

int main()
{
	string sWord, sWord2;
	cin>>sWord;
	cin>>sWord2;
	Solution s;
	if(s.isAnagram(sWord, sWord2))
		cout << "True"<<endl;
	else
		cout << "False"<<endl;
	return 0;
}