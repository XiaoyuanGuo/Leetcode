class Solution {
public:
    int solveMaxProfit(vector<int>&prices){
        int res = 0; 
        int n = prices.size();
        for(int i = 0; i < n-1; i++){
            if(prices[i+1] > prices[i])
                res += prices[i+1] - prices[i];
        }
        return res;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        int res = 0;
        if(n <= 1)
            return res;
        if (k >= n) return solveMaxProfit(prices);
        vector<int> local(k+1, 0);
        vector<int> global(k+1, 0);
        for(int i = 0; i < n-1; i++){
            int diff = prices[i+1]-prices[i];
            for(int j = k; j>=1; j--){
                local[j] = max(global[j-1]+max(diff,0), local[j]+diff);
                global[j] = max(global[j], local[j]);
            }
        }
        return global[k];
    }
};
