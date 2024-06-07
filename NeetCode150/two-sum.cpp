class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> numsAndIndex;
	for (int i=0; i < nums.size(); i++) {
	    int val = nums[i];
	    int diff = target - val;
	    if (numsAndIndex.find(diff) != numsAndIndex.end()) {
		return {numsAndIndex[diff], i};
	    }
	    numsAndIndex[val] = i;
	}
	return {};
    }
};
