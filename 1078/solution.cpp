class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        string word = "";
        int flag = 0;
        vector<string> res;
        for(auto c: text){
            if(c == ' '){
                if(flag == 0){
                    if(word == first)
                        flag = 1;
                }else if(flag == 1){//flag == 1
                    if(word == second)
                        flag = 2;
                    else if(word == first)
                        flag = 1;
                    else
                        flag = 0;
                }else{
                    res.push_back(word);
                    if(word == first)
                        flag = 1;
                    else flag = 0;
                }
                word = "";
            }else{
                word += c;
            }
        }
        if(word != "" && flag == 2){
            res.push_back(word);
        }        
        return res;
    }
};
