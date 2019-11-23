class Solution {
public:
//use upper limits
    int counttime = 0;
    bool isHappy(int n) {
        string s = to_string(n);
        int res = 0;
        int i = 0;
        while(i<s.length()){
            res += (s[i]-'0')*(s[i]-'0');
            i++;
        }
        if(res == 1)
            return true;
        else if(counttime++>=10)
            return false;
        else
            return isHappy(res);
    }
};
