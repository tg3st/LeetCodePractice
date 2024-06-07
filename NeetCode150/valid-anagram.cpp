class Solution {
public:
    bool isAnagram(string s, string t) {
	unordered_map<char, int> tDict;
	unordered_map<char, int> sDict;

	if (s.size() != t.size()) return false;

	for (int i=0; i < s.size(); i++) {
	    sDict[s[i]]++;
	    tDict[t[i]]++;
	}
	return tDict == sDict;
    }
};
