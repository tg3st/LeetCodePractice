class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> s_map; // create char w/ rep map for s 
        unordered_map<char, int> t_map; // create same for t
        int c;
        for (c = 0; c < s.size(); c++) {
            s_map[s[c]]++; // increment char repetition
            t_map[t[c]]++; // increment char repetition
        }
        /*for (c = 0; c < s_map.size(); c++) {
            if (s_map[c] != t_map[c]) return false;
        }
        return true;*/
        return s_map == t_map; // if map same = anagram valid
    }
};
