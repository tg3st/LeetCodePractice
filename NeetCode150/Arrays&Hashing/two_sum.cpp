class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // get index of correct sum vals
        unordered_map<int,int> map; // create map for val
        int i;
        for(i = 0; i < nums.size(); i++) {
            int compliment = target - nums[i]; // create compliment which must be part of nums
            if (map.find(compliment) != map.end()) // try to find compliment in map
                return {map[compliment], i};  // return indices
            map[nums[i]] = i; // add new map k,v
        }
        return {}; // if not found return empty - NULL vs {}
    }
};
