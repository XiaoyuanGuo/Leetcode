class Solution {
public:
    string changeword(string word, int n){
        string res = "";
        if(tolower(word[0]) == 'a'  || tolower(word[0]) == 'e' || tolower(word[0]) == 'i' ||tolower(word[0]) == 'o' || tolower(word[0]) == 'u'){
            res = word;
        }
        else{
            res = word.substr(1, word.length()-1);
            res += word[0];    
        }
        res += "ma";
        for(int i = 0; i < n; i++)
            res += "a";
        return res;
    }
    
    string toGoatLatin(string S) {
        string w = "";
        string res = "";
        int i = 0;
       
        for(auto c: S){
            
            if(c == ' ' && w.length() > 0){
                i++;
                res += changeword(w, i);
                res += c;
                w = "";
            }
            else{
                w += c;
            }
                
        }
        if(w.length() > 0){
            i++;
            res += changeword(w, i);
        }
        return res;
    }
     
};
