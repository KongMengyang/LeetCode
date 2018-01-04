#include<string>
#include<map>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.length() == 0) return 0;
		int result=1;
		map<char, int> map;
		for (int i = 0, j = 0; j < s.length(); j++) {
			if ((map.find(s[j]) != map.end())&&i<=map[s[j]])
			{
				i = map[s[j]] + 1;
			}
			//result = max(result, j - i+1);
			if (result < j - i + 1) result = j - i + 1;
			map[s[j]] = j;
		}
		return result;
		
	}
};
int main() {
	Solution s;
	string str1 = "abcabcbb";
	string str2 = "bbbbb";
	string str3 = "pwwkew";
	cout << s.lengthOfLongestSubstring(str1) << endl;
	cout << s.lengthOfLongestSubstring(str2) << endl;
	cout << s.lengthOfLongestSubstring(str3) << endl;
	getchar();
}