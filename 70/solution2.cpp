class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 2;
        if(n == 1)
            return a;
        if(n == 2)
            return b;
        for(int i = 2; i < n-1; i++){
            int t = a + b;
            a = b;
            b = t;
        }
        return a+b;
    }
};
