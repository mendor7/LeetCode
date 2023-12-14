class Solution {
public:
    int mySqrt(int x) {
        long long int root = 0;
        while (root * root < x) {
            root++;
        }
        if (root * root != x) {
            root--;
        }
        return root;
    }
};