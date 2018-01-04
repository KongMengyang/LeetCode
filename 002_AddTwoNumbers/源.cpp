#include<stdio.h>
#include<iostream>
using namespace std;
//* Definition for singly-linked list.
struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *result = new ListNode(0);
		ListNode *result_next = result;
		ListNode *list1=l1;
		ListNode *list2=l2;
		int sum = 0;
		while (list1||list2)
		{
			sum /= 10;
			if (list1)
			{
				sum += list1->val;
				list1=list1->next;
			}
			if (list2)
			{
				sum += list2->val;
				list2 = list2->next;
			}
			result_next->next = new ListNode(sum % 10);
			result_next = result_next->next;
		}
		if (sum / 10 == 1)
		{
			result_next->next = new ListNode(1);
		}
		
		/*bool tag=false;
		while (list1 != NULL||list2 != NULL)
		{
			int value;
			if (list1 == NULL) 
			{
				value = list2->val;
				list2 = list2->next;
			}
			else if(list2==NULL)
			{
				value = list1->val;
				list1 = list1->next;
			}
			else
			{
				value = list1->val + list2->val;
				list1 = list1->next;
				list2 = list2->next;
			}
			if (tag == true) 
			{
				value++;
				tag = false;
			}
			if (value >= 10) 
			{
				value -= 10;
				tag = true;
			}
			ListNode* newListNode = new ListNode(value);
			result_next->next = newListNode;
			result_next = newListNode;
		}
		if (tag == true) 
		{
			ListNode* newListNode = new ListNode(1);
			result_next->next = newListNode;
			result_next = newListNode;
		}*/
		return result->next;

	}
};


int main() {
	ListNode *l1=new ListNode(2);
	//l1->val = 2;
	l1->next = new ListNode(4);
	l1->next->next = new ListNode(3);
	ListNode *l2=new ListNode(5);
	//l2->val = 5;
	l2->next = new ListNode(6);
	l2->next->next = new ListNode(4);
	ListNode *result;
	Solution s;
	result = s.addTwoNumbers(l1, l2);
	while (result!=NULL)
	{
		cout << result->val << endl;
		result = result->next;
	}
	getchar();

}