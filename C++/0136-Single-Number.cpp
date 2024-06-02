class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //unordered_map<int, int> times;
        //int once;
        sort(nums.begin(), nums.end());
        if (nums.size() == 1) {
            return nums[0];
        }
        else if (nums[0] != nums[1]) {
            return nums[0];
        }
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1]) {
                return nums[i];
            }
        }
        return nums[nums.size() - 1];
        /*for (int i = 0; i < nums.size(); i++) {
            times[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (times[nums[i]] == 1) {
                once = nums[i];
                break;
            }
        }*/
        //return once;
    }
};