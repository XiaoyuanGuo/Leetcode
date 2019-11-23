class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n <= 1) return 0;
        vector<int> dp(n,0);
        int mx = 0, res = 0;
        for(int i = 0; i < n; i++){
            dp[i] = mx;
            mx = max(mx, height[i]);
        }
        mx = 0;
        for(int i = n-1; i >= 0; i--){
            dp[i] = min(mx, dp[i]);
            mx = max(mx, height[i]);
            if(dp[i] > height[i])
                res += dp[i]-height[i];
        }
        return res;
    }
};
