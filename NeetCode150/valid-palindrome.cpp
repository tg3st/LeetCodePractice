class Solution {
public:
    bool isPalindrome(string s) {
	int i = 0;
	int j = s.size() - 1;

	while (i < j) {
	    bool alNum = true;
	    char leftChar = s[i];
	    char rightChar = s[j];
	    if (!isalnum(leftChar)) {
		++i;
		alNum = false;
	    }
	    if (!isalnum(rightChar)) {
		--j;
		alNum = false;
	    }
	    if (!alNum) {
		continue;
	    }

	    if (tolower(leftChar) != tolower(rightChar)) 
		return false;

	    ++i;
	    --j;
	}
	return true;
    }
};
