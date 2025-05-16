#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
class Solution {
	public: 
		bool isAnagram (string s, string t){
			if (s.length() != t.length()) { return false; }
			sort(s.begin(), s.end());
			sort (t.begin(), t.end());

			return s == t;
		}
};

int main() {
    Solution solution;
    
bool result = 	solution.Solution::isAnagram("racecar", "carrace");
cout << result;
return 0;
}
