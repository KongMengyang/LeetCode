#include<vector>
using namespace std;


class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int totalLength = nums1.size() + nums2.size();
		int res1, res2;
		int x1 = (totalLength -1)/ 2;
		int x2 = totalLength/ 2;
		if (nums1[0] == NULL) return double(nums2[x1] + nums2[x2]) / 2;
		if (nums2[0] == NULL) return double(nums1[x1] + nums1[x2]) / 2;
		int tag = 0;
		for (int i = 0, j = 0; i + j <= x2;)
		{
			if (i + j == x1)
			{
				if (tag == 1) {
					res1 = nums1[i];
				}
				else {
					res1 = nums2[j];
				}
			}
			if (i + j == x2)
			{
				if (tag == 1) {
					res2 = nums1[i];
				}
				else {
					res2 = nums2[j];
				}
			}
			if (i == nums1.size() - 1||nums1[i]>nums2[j])
			{
				j++;
				tag = 2;
			}
			else {
				i++;
				tag = 1;
			}
		}
			
		return (double)(res1 + res2) / 2;

	}
};
int main() {
	vector<int> nums1;
	vector<int> nums2;
	nums2.push_back(1);


}
