class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        vector<vector<int>> combined;
        temp.push_back(1);
        combined.push_back(temp);
        if (rowIndex == 0) {
            return temp;
        }
        temp.push_back(1);
        combined.push_back(temp);
        if (rowIndex == 1) {
            return temp;
        }
        temp.clear();
        for (int i = 2; i <= rowIndex; i++) {
            temp.push_back(1);
            for (int j = 1; j <= i - 1; j++) {
                temp.push_back(combined[i - 1][j] + combined[i - 1][j - 1]);
            }
            temp.push_back(1);
            combined.push_back(temp);
            temp.clear();
        }

        return combined[rowIndex];
    }
};