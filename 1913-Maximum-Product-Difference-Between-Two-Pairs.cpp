class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // unordered_map<int, int> values;
        int smallest1 = 0;
        int smallest2 = 0;
        int largest1 = 0;
        int largest2 = 0;
        sort(nums.begin(), nums.end());
        smallest1 = nums[0];
        smallest2 = nums[1];
        largest1 = nums[nums.size() - 1];
        largest2 = nums[nums.size() - 2];
        // for (int i = 0; i < nums.size(); i++) {
        //     if (!values.contains(nums[i])) {
        //         values[nums[i]] = 0;
        //     }
        //     values[nums[i]]++;
        // }
        // smallest1 = nums[0];
        // if (values[nums[0]] > 1) {
        //     smallest2 = nums[0];
        // }
        // else {
        //     smallest2 = nums[1];
        // }
        // largest1 = nums[nums.size() - 1];
        // if (values[nums[nums.size() - 1]] > 1) {
        //     largest2 = nums[nums.size() - 1];
        // }
        // else {
        //     largest2 = nums[nums.size() - 2];
        // }
        return ((largest1 * largest2) - (smallest1 * smallest2));
    }
};
