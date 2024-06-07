class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string, vector<string>> groupAg;

        for (string word : strs) {
            multiset<char> anagram;
            string key;

            for (char letter : word) {
                anagram.insert(letter);
            }
            for (char letter : anagram) {
                key.append(letter);
            }

            groupAg[key].emplace_back(word);
        }

        for (
        //for (auto i = groupAg.begin(); i != group
        //
        return res;
    }
};
