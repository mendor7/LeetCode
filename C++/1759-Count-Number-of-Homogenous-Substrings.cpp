class Solution {
public:
    int countHomogenous(string s) {
        long long count = 0;
        long long length = 1;
        for (int i = 0; i < s.length(); i++) {
            while (s[i] == s[i+1]) {
                length++;
                i++;
            }
            count += (length * (length + 1) / 2);
            length = 1;
        }
        return count % (1000000007);
    }
};