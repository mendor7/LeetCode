class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> temp;
        vector<vector<int>> combined;
        int counter = 0;
        temp.push_back(1);
        combined.push_back(temp);
        if (numRows > 1) {
            temp.push_back(1);
        combined.push_back(temp);
        }
        temp.clear();
        for (int i = 2; i < numRows; i++) {
            temp.push_back(1);
            counter++;
            for (int j = 1; j <= i - 1; j++) {
                temp.push_back(combined[i - 1][j] + combined[i - 1][j - 1]);
            }
            temp.push_back(1);
            combined.push_back(temp);
            temp.clear();
        }

        return combined;
    }
};