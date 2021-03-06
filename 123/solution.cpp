class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int res = 0;
        if(n<=1) return res;
        vector<int> local(3,0);
        vector<int> global(3,0);
        for(int i = 0; i < n-1; i++){
            int diff = prices[i+1]-prices[i];
            for(int j = 2; j >=1; j--){
                local[j] = max(global[j-1]+max(diff, 0), local[j]+diff);
                global[j] = max(global[j], local[j]);
            }
        }
        return global[2];
    }
};
