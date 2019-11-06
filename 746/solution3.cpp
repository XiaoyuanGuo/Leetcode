class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        int a = 0, b= 0;
        for(auto c: cost){
            int t = min(a, b) + c;
            a = b;
            b = t;
        }
        return min(a,b);
    }
};
