class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string next = paths[0][1];
        bool found = false;
        while (1) {
            for (int i = 0; i < paths.size(); i++) {
                if (paths[i][0] == next) {
                    next = paths[i][1];
                    found = true;
                }
            }
            if (found == false) {
                break;
            }
            else {
                found = false;
            }
        }
        return next;
    }
};