class Solution {
public:
    int maxLength(vector<string>& arr) {
    //solution from discussion, mainly use bitset
        vector<bitset<26>> dp = {bitset<26>()};
        int res = 0;
        for(auto s: arr){
            bitset<26> tmp;
            for(auto c: s)
                tmp.set(c-'a');
            int n = tmp.count();
            if(n < s.size())//redundant/duplicate letters
                continue;
            for(int i = dp.size()-1; i >=0; i--){
                bitset tmp2 = dp[i];
                if((tmp2 & tmp).any()) continue; //they overlap
                dp.push_back(tmp |tmp2);
                res = max(res, (int)tmp2.count()+n);
            }
        }
        return res;
    }
};
