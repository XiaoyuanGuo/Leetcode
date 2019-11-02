class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.length() > typed.length())//typed string is shorter than the actual string name
            return false;
        char last =  name[0];
        int i = 0, j = 0;
        while(i < name.length() && j < typed.length()){
            if(i == 0){//this is the first character
                if(name[i] == typed[j]){
                    last = name[i];
                    i++;
                    j++;
                }else//the first character is not correct
                    return false;
            }else{
                if(name[i] == typed[j]){
                    last = name[i];//record the last element that've been visited
                    i++;
                    j++;
                }else{
                    if(last == typed[j]){
                        j++;
                    }else
                        return false;
                }
            }
        }
        if(j != typed.length())//typed string has redundant characters, but we need to make a judgement 
        {
            while(j < typed.length()){
                if(typed[j] != last)
                    return false;
                j++;
            }
            
        }
        if(i != name.length())//left characters are not in typed
            return false;
        return true;
    }
};
