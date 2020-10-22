#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum =0;
        while(head!=NULL){
            //lastpostimes2
            sum = sum *2;
            //add the val of curr node
            //sum+=head->val;
            sum+=+head->val;
            //getnext
            head = head->next;
        }
        return sum;
    }
};

int main()
{
	Solution s;
	return 0;
}