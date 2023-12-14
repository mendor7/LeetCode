class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = "";
        string longestPrefixTemp = "";
        if (strs.size() == 1) {
            longestPrefix = strs[0];
        }
        else {
            string temp1 = strs[0];
            string temp2 = strs[1];
            
            for (int i = 0; i < temp1.length() && i < temp2.length(); i++) {
                if (temp1[i] == temp2[i]) {
                    longestPrefixTemp += temp1[i];
                }
                else {break;}
            }
            longestPrefix = longestPrefixTemp;
            longestPrefixTemp = "";
            
            for (int i = 1; i < strs.size(); i++) {
                temp2 = strs[i];
                for (int j = 0; j < longestPrefix.length() && j < temp2.length(); j++) {
                    if (longestPrefix[j] == temp2[j]) {
                        longestPrefixTemp += longestPrefix[j];
                    }
                    else {break;}
                }
                longestPrefix = longestPrefixTemp;
                longestPrefixTemp = "";
            }
        }
        return longestPrefix;
    }
};