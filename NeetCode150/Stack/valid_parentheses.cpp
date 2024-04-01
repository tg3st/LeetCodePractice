class Solution {
public:
	bool isValid(string s) {
		// approach is to store open paren in a stack
		// b/c for a valid input those should come first
		// when we see a close paren there should be a corresponding
		// open paren in the stack which we can then pop
		// through this method the stack should be empty
		// by the end of the string traversal
		
		stack<char> openParen;
		
		// when we find a close paren we want to look for
		// corresponding open paren in stack therefore
		// close paren should be key
		unordered_map<char, char> parenMap = 
			{{ ')', '(' },
			 { '}', '{' },
			 { ']', '[' }};
		// start with open test
		// start with close test
		for (char c: s) {
			if (parenMap.find(c) == parenMap.end()) {	
			// if c is open paren
				openParen.push(c);
			}
			else {
				if (openParen.empty()) return false;
				if (openParen.top() != parenMap[c]) return false;
				openParen.pop();
			}
		}
		return openParen.empty();
	}
};
