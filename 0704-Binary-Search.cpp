class Solution {
public:
    int search(vector<int>& nums, int target) {
        int indexLeft = 0;
        int indexRight = nums.size() - 1;
        while(indexLeft <= indexRight) {
            if (nums[indexLeft] == target) {
                return indexLeft;
            }
            else if (nums[indexRight] == target) {
                return indexRight;
            }
            else {
                indexLeft++;
                indexRight--;
            }
        }
        return -1;
    }
};