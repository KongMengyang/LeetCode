#include<vector>
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
class Solution {
public:
	//±©Á¦½â¾ö
	/*vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		for (int i = 0; i < nums.size(); i++)
		{
			for (size_t j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					result.push_back(i);
					result.push_back(j);
					return result;
				}
			}
		}
	}*/
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++)
		{
			int numberToFind = target - nums[i];
			if (map.find(numberToFind)!=map.end()) 
			{
				result.push_back(map[numberToFind] );
				result.push_back(i );
				return result;
			}
			map[nums[i]] = i;
		}
	}


};
vector<int> inputs;


int main() {
	inputs.push_back(2);
	inputs.push_back(7);
	inputs.push_back(11);
	inputs.push_back(15);
	vector<int> result;
	Solution s;
	result= s.twoSum(inputs, 9);
	cout << result[0]<<" "<<result[1];
	getchar();

}