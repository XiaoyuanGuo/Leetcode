class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
    //this is my first solution
        vector<unordered_map<char, int>> mp;
        vector<string> res;
        for(auto s: A){
            unordered_map<char, int> tmp;
            for(auto c: s){
                tmp[c]++;
            }
            mp.push_back(tmp);
        }
        unordered_map<char, int> tmp = mp[0];
        for(auto c: tmp){
            int count = c.second;
            for(int i = 1; i < mp.size(); i++){
                count = min(mp[i][c.first], count);
            }
            if(count != 0){
                string ss(1, c.first);
                for(int j = 0 ; j < count; j++)
                    res.push_back(ss);
            }
        }
        return res;
        
    }
};
