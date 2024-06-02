class Solution {
public:
    int climbStairs(int n) {
        int ways = 0;
        int count = 0;
        int previous = 2;
        int previous2 = 1;
        if (n == 1) {
            ways++;
        }
        else if (n == 2) {
            ways += 2;
        }
        else {
            count = 3;
            while (count <= n) {
                ways = previous + previous2;
                previous2 = previous;
                previous = ways;
                count++;
            }
        }

        return ways;
    }
};