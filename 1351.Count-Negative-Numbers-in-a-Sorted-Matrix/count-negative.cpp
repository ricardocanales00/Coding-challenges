#include <iostream> 
#include <vector> // for 2D vector 

using namespace std;

class Solution {
public:
	int binarySearch(vector<int> &grid){
		int negatives = grid.size()-1;
		int l = 0, u = grid.size()-1;
		while (l <= u) {
			int m = l + (u - l) / 2;
			if (grid[m] >= 0) {
				l = m + 1;
			} else {
				u = m - 1; }
		}
		negatives = negatives - u;
		return negatives;
	}
	
	int countNegatives(vector<vector<int> >& grid) {
		if(grid.size() == 0 || grid[0].size()==0)
			return 0;
		else{
			int negatives = 0;
			for (int i=0; i<grid.size(); i++) {
				negatives += binarySearch(grid[i]);
			}
			return negatives;
		}
	}
};

int main()
{
	Solution s;

	 vector<vector<int> > vect{	{4,3,2,-1},
								{3,2,1,-1},
								{1,1,-1,-2},
								{-1,-1,-2,-3} };

	cout << s.countNegatives(vect);

	return 0;
}