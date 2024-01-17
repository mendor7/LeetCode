class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurences;
        unordered_map<int, int> uniques;
        for (int i = 0; i < arr.size(); i++) {
            occurences[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (uniques[occurences[arr[i]]] == 0) {
                uniques[occurences[arr[i]]] = arr[i];
            }
            else if (uniques[occurences[arr[i]]] != arr[i]) {
                return false;
            }
        }
        return true;
    }
};