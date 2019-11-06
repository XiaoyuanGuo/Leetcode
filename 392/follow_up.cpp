class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map<char, vector<int>> mp;
        int n = t.size();
        for(int i = 0; i < n; i++)
            mp[t[i]].push_back(i);
        int pre = -1;
        for(auto c: s){
            auto it = upper_bound(mp[c].begin(), mp[c].end(), pre);
            if(it == mp[c].end()) return false;
            pre = *it;
        }
        return true;
    }
};
