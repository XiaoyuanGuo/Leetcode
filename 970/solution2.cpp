class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
    //this solution is much elegant, from https://zxi.mytechroad.com/blog/math/leetcode-970-powerful-integers/
        unordered_set<int> ans;
        for(int a = 1; a < bound; a*=x){
            for(int b = 1; a+b <= bound; b*=y){
                ans.insert(a+b);
                if(y == 1) break;
            }
            if(x == 1) break;
        }
        return {begin(ans), end(ans)};
    }
};
