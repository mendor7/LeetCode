class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> first;
        vector<int> answer;
        for (int i = 0; i < nums1.size(); i++) {
            first[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (first[nums2[i]] > 0) {
                answer.push_back(nums2[i]);
                first[nums2[i]]--;
            }
        }
        return answer;
    }
};