#include unordered_map

class Solution {
public:
    bool isValid(string s) {
        stack<char> parenStack;
        unordered_map<char, char> parenMap =
            {
                {')', '('},
                {']', '['},
                {'}', '{'}
            };

        for (char c : s) {
            if (parenMap.find(c) == parenMap.end()) {
                // found open paren
                parenStack.push(c);
            }
            else {  // found close paren
                char openParen = parenMap[c];
                if (parenStack.empty()) return false;

                if (parenStack.top() == openParen) {
                    parenStack.pop();
                }
                else { return false; }
            }
        }
        return parenStack.empty();
    }
};
