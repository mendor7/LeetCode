class Solution {
public:
    int addDigits(int num) {
        int sum = num % 9;
        if (sum == 0 && num != 0) {
            sum = 9;
        }
        return sum;
    }
};