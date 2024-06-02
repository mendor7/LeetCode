class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueCounter = 0;
        bool started = false;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i] != nums[i - 1]) {
                uniqueCounter++;
                nums.push_back(nums[i]);
                started = true;
            }
        }
        if (started == false) {
            uniqueCounter++;
            nums.push_back(nums[0]);
            started = true;
        }
        if (nums[0] != nums[nums.size() - 1]) {
            uniqueCounter++;
            nums.push_back(nums[0]);
        }
        reverse(nums.begin(), nums.end());
        return uniqueCounter;
    }
};