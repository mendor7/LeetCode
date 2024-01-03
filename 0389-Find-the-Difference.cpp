class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> sTimes;
        unordered_map<char, int> tTimes;
        for (int i = 0; i < t.length(); i++) {
            if (i == s.length()) {
                tTimes[t[i]]++;
                break;
            }
            sTimes[s[i]]++;
            tTimes[t[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            if (tTimes[t[i]] != sTimes[t[i]]) {
                return t[i];
            }
        }
        return '0';
    }
};
