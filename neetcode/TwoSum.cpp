#include <iostream>
#include <vector> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();
	for (int i = 0; i < size; i++) {
		for(int j = i + 1; j < size; j++) {
                       
                         if ( nums[i] + nums[j] == target ) {return {i, j}; } 
		}
        } 
	return {};
    }
};


int main () {
	Solution solution;
    // initial case
	vector<int> input = {3, 4, 5, 6};
	int target = 10;
	
	vector<int> result = solution.twoSum(input, target);
	
	cout << result[0] << " "<< "and" << " " <<result[1];
	
	
	

	return 0;
}

