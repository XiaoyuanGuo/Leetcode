class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int tmp = 0;
        for(char c: s){
            tmp += (c == 'L'? -1 : 1);
            if(tmp == 0)
                res++;
        }
        return res;
    }
};

idea from https://zxi.mytechroad.com/blog/greedy/leetcode-1221-split-a-string-in-balanced-strings/
