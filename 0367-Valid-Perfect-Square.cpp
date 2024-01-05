class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int check = 1;
        while (check * check <= num) {
            if (check * check == num) {
                return true;
            }
            check++;
        }
        return false;
    }
};