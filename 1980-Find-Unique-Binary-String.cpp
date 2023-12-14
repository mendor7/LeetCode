class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string newNum = "";
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i][i] == '0') {
                newNum = newNum + '1';
            }
            else if (nums[i][i] == '1') {
                newNum = newNum + '0';
            }
        }
        return newNum;
    }
};