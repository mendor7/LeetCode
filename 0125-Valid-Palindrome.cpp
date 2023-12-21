class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')) {
                s.erase(s.begin() + i);
                i--;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        
        string s2 = s;
        reverse(s2.begin(), s2.end());
        if (s == s2) {
            return true;
        }
        return false;
    }
};