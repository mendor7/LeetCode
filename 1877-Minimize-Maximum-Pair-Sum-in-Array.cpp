class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int max = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (max < nums[i] + nums[nums.size() - i - 1]) {
                max = nums[i] + nums[nums.size() - i - 1];
            }
        }
        return max;
    }
};