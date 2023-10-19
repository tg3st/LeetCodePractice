class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> appeared;
        int i;
        for ( i = 0; i <= nums.size() -1; i++) {
            if (appeared.find(nums[i]) != appeared.end()) // find defaults to end if not found
                return true; // only if val found
            appeared.insert(nums[i]);
        }   
        return false;
    }
};
