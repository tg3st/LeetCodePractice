// Bin. search = continuously split in half
// f
// Time: O (log n)
// Space: 

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int start, end, mid;

		while (start < end) {
			int mid = (start + end) / 2;
			if (nums[mid] == target) return mid;

			if (nums[mid] < target) {
				start = mid;
			}

			else { // nums[mid] > target
				end = mid;	
			}
		}
		return -1;	
	}
};
