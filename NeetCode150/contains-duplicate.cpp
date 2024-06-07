class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> seenNums;

	for (auto val: nums) {
		if (seenNums.find(val) != seenNums.end()) { return true;}

		seenNums.insert(val);
	}
	return false;
    }
};
