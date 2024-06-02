class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> occurences;
        for (int i = 0; i < nums.size(); i++) {
            occurences[nums[i]]++;
            if (occurences[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
        }
        return 0;
    }
};