class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for (int i = 0; i < nums.size(); i++) {
            bool found = false;
            for (int j = 0; j < nums.size(); j++) {
                if ((nums[i] + nums[j] == target) && (i != j)) {
                    indices = {i , j};
                    found = true;
                    break;
                }
            }
            if (found) {break;}
        }
        return indices;
    }
};