class Solution {
public:
    int climbStairs(int n) {
        if (n == 2) return 2;
        else if (n == 1) return 1;

        return climbStairs(n/2);
    }
};
