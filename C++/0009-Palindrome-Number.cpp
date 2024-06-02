class Solution {
public:
    bool isPalindrome(int x) {
        string test = to_string(x);
        int startIndex = 0;
        int endIndex = test.length() - 1;
        while (test[startIndex] == test[endIndex]) {
            if (startIndex < test.length() - 1) {
                startIndex++;
            }
            else {
                break;
            }
            if (endIndex >= 0) {
                endIndex--;
            }
            else {
                break;
            }
        }
        if (startIndex == test.length() - 1) {
            return true;
        }
        return false;
    }
};