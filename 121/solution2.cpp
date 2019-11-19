class Solution {
public:
//from https://www.cnblogs.com/grandyang/p/4280131.html
    int maxProfit(vector<int>& prices) {
        int res = 0, buy = INT_MAX;
        for(int price: prices){
            buy = min(buy, price);
            res = max(res, price - buy);
        }
        return res;
    }
};
