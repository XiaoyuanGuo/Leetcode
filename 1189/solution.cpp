class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(auto c: text)
            mp[c]++;
        int res = text.length();
        res = min(res, mp['b']);
        res = min(res, mp['a']);
        res = min(res, mp['n']);
        res = min(res, mp['l']/2);
        res = min(res, mp['o']/2);
        return res;
    }
};
