class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        string res;
        unordered_set<string> s;
        for(auto w: words){
            if(w.length() == 1 || s.count(w.substr(0, w.length()-1))){
                res = w.length() > res.length()? w : res;
                s.insert(w);
            } 
        }
        return res;
    }
};
