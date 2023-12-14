class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                if (stack.empty()) {
                    return false;
                }
                if (stack.top() != '(') {
                    return false;
                }
                else {
                    stack.pop();
                }
            }
            else if (s[i] == '}') {
                if (stack.empty()) {
                    return false;
                }
                if (stack.top() != '{') {
                    return false;
                }
                else {
                    stack.pop();
                }
            }
            else if (s[i] == ']') {
                if (stack.empty()) {
                    return false;
                }
                if (stack.top() != '[') {
                    return false;
                }
                else {
                    stack.pop();
                }
            }
            else {
                stack.push(s[i]);
            } 
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
};