class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> greater;
        int index = 0;
        int length1 = nums1.size();
        int length2 = nums2.size();
        bool found = false;
        for (int i = 0; i < length2; i++) {
            if (index == length1) {
                break;
            }
            if (nums2[i] == nums1[index]) {
                for (int j = i + 1; j < length2; j++) {
                    if (nums2[j] > nums2[i]) {
                        greater.push_back(nums2[j]);
                        found = true;
                        break;
                    }
                }
                if (found == false) {
                    greater.push_back(-1);
                }
                else {
                    found = false;
                }
                index++;
                i = -1;
            }
        }
        return greater;
    }
};