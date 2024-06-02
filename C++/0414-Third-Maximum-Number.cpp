class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first;
        int second;
        int third;
        int length = nums.size();
        sort(nums.begin(), nums.end());
        first = nums[length - 1];
        if (length == 1) {
            return first;
        }
        second = nums[length - 2];
        if (length == 2) {
            return (first > second) ? first : second;
        }
        third = nums[length - 3];
        if (length == 3) {
            if (first == second || first == third || second == third) {
                int bigger;
                bigger = (first > second) ? first : second;
                bigger = (bigger > third) ? bigger : third;
                return bigger;
            }
            else {
                int smaller;
                smaller = (first <= second) ? first : second;
                smaller = (smaller <= third) ? smaller : third;
                return smaller;
            }
        }
        for (int i = length - 2; i >= 0; i--) {
            if (second == first) {
                second = nums[i];
            }
            else if (third == second){
                third = nums[i];
            }
            else {
                break;
            }
        }
        if (first == second || first == third || second == third) {
                int bigger;
                bigger = (first > second) ? first : second;
                bigger = (bigger > third) ? bigger : third;
                return bigger;
        }
        else {
            return third;
        }
    }
};