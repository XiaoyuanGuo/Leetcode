class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
    //parse the string first and then match the first and second words 
        vector<string> words;
        vector<string> res;
        string word = "";
        for(auto c: text)
            if(c == ' '){
                words.push_back(word);
                word = "";
            }
            else
                word += c;
        words.push_back(word);
        for(int i = 0; i < words.size()-2; i++){
            if(words[i] == first && words[i+1] == second)
                res.push_back(words[i+2]);
        }
        return res;
    }
};
