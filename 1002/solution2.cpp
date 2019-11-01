class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
    //here, we don't use unordered_map, just use vector, use subindex to recore the frequency of each English letter, and every time update the frequency 
        vector<int> tmp1(26, 10000+1);
        vector<string> res;
        for(auto s: A){
            vector<int> tmp2(26,0);
            for(auto c: s){
                tmp2[c-'a']++;
            }
            for(int i = 0; i < 26; i++){
                tmp1[i] = min(tmp1[i], tmp2[i]);
            }
        }
        for(int i = 0; i < 26; i++){
            string ss(1, i+'a');
            for(int j = 0; j < tmp1[i]; j++){
                res.push_back(ss);
            }
        }
        return res;
        
    }
};
