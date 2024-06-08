class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                if (i == s.length() - 1) {
                    return false;
                }
                else {
                    if (s.charAt(i + 1) == '[' || s.charAt(i + 1) == '{' || s.charAt(i + 1) == '(') {
                        stack.push(s.charAt(i));
                    }
                    else if (s.charAt(i + 1) != ')') {
                        return false;
                    }
                }
            }
            else if (s.charAt(i) == '{') {
                if (i == s.length() - 1) {
                    return false;
                }
                else {
                    if (s.charAt(i + 1) == '[' || s.charAt(i + 1) == '(' || s.charAt(i + 1) == '{') {
                        stack.push(s.charAt(i));
                    }
                    else if (s.charAt(i + 1) != '}') {
                        return false;
                    }
                }
            }
            else if (s.charAt(i) == '[') {
                if (i == s.length() - 1) {
                    return false;
                }
                else {
                    if (s.charAt(i + 1) == '(' || s.charAt(i + 1) == '{' || s.charAt(i + 1) == '[') {
                        stack.push(s.charAt(i));
                    }
                    else if (s.charAt(i + 1) != ']') {
                        return false;
                    }
                }
            }
            else if (s.charAt(i) == ')') {
                if (i == 0) {
                    return false;
                }
                else {
                    if (s.charAt(i - 1) == ']' || s.charAt(i - 1) == '}' || s.charAt(i - 1) == ')') {
                        if (stack.isEmpty() || stack.pop() != '(') {
                            return false;
                        }
                    }
                    else if (s.charAt(i - 1) != '(') {
                        return false;
                    }
                }
            }
            else if (s.charAt(i) == '}') {
                if (i == 0) {
                    return false;
                }
                else {
                    if (s.charAt(i - 1) == ']' || s.charAt(i - 1) == ')' || s.charAt(i - 1) == '}') {
                        if (stack.isEmpty() || stack.pop() != '{') {
                            return false;
                        }
                    }
                    else if (s.charAt(i - 1) != '{') {
                        return false;
                    }
                }
            }
            else if (s.charAt(i) == ']') {
                if (i == 0) {
                    return false;
                }
                else {
                    if (s.charAt(i - 1) == ')' || s.charAt(i - 1) == '}' || s.charAt(i - 1) == ']') {
                        if (stack.isEmpty() || stack.pop() != '[') {
                            return false;
                        }
                    }
                    else if (s.charAt(i - 1) != '[') {
                        return false;
                    }
                }
            }
        }
        if (!stack.isEmpty()) {
            return false;
        }
        return true;
    }
}