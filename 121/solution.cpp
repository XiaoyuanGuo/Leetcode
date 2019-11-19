class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
            return 0;
        int mymin = prices[0];
        int mymax = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < mymin)
                mymin = prices[i];
            else
                mymax = max(mymax, prices[i]-mymin);
        }
        return mymax;
        
    }
};
