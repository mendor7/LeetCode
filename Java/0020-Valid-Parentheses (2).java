class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        int length = s.length();
        if (length % 2 == 1) {
            return false;
        }
        for (int i = 0; i < length; i++) {
            char temp = s.charAt(i);
            if (i != length - 1 && temp == '(' && (s.charAt(i + 1) == ')')) {
                i++;
            }
            else if (i != length - 1 && temp == '[' && (s.charAt(i + 1) == ']')) {
                i++;
            }
            else if (i != length - 1 && temp == '{' && (s.charAt(i + 1) == '}')) {
                i++;
            }
            else if (temp == ')') {
                if (stack.isEmpty()) {
                    return false;
                }
                else if (stack.pop() != '(') {
                    return false;
                }
            }
            else if (temp == ']') {
                if (stack.isEmpty()) {
                    return false;
                }
                else if (stack.pop() != '[') {
                    return false;
                }
            }
            else if (temp == '}') {
                if (stack.isEmpty()) {
                    return false;
                }
                else if (stack.pop() != '{') {
                    return false;
                }
            }
            else {
                stack.push(temp);
            }
        }
        if (!stack.isEmpty()) {
            return false;
        }
        return true;
    }
}