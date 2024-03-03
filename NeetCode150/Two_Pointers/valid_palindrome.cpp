// Time: O(n)
// Space: O(1)

class Solution {
public:
    bool isPalindrome(string s) {
    	// two pointer approach
	// split word in "half"

	int i = 0;
	int j = s.size() - 1;

	while (i < j) { // if intersect reached middle 
		while (!isalnum(s[i]) && i < j) {
			// keep looking for alphanum char from front
			i++;
		}
		while (!isalnum(s[j]) && i < j) {
			// keep lookinf for alphanum char from back
			j--;
		}
		// once both i and j point to alphanums compare them
		if (tolower(s[i]) != tolower(s[j])) {
			return false;
		}
		// move on to next char
		i++;
		j--;
	}
	// if no conflicting char found string is valid palindrone
	return true;
    }
};
