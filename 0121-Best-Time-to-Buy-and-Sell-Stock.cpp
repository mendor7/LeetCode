class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max = prices[prices.size() - 1];
        for (int i = prices.size() - 1; i >= 0; i--) {
            if (max < prices[i]) {
                max = prices[i];
            }
            if (max - prices[i] > profit) {
                profit = max - prices[i];
            }
        }
        return profit;
    }
};