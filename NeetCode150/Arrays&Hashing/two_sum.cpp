class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
	int numSize = nums.size();
	unordered_map<int,int> prevNums;

	for (int i=0; i < numSize; i++) {
	    diff = target - nums[i];
		if (prevNums.find(diff) != prevNums.end()) {
			return {prevNums[diff], i};
		}
		prevNums[nums[i]] = i;
		
	}
    return {};
    }
};

