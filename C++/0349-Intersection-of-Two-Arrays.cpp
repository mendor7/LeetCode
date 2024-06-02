class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> first;
        unordered_map<int, bool> pushed;
        vector<int> answer;
        for (int i = 0; i < nums1.size(); i++) {
            first[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (first[nums2[i]] > 0 && pushed[nums2[i]] == false) {
                answer.push_back(nums2[i]);
                pushed[nums2[i]] = true;
            }
        }
        return answer;
    }
};