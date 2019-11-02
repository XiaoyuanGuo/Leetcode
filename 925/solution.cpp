class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.length() > typed.length())//typed is shorter than name
            return false;
        int i = 0, j = 0;
        char last = name[0];
        while( i< name.length() && j < typed.length()){
            if(typed[j] == name[i]){
                last = name[i];
                i++;
                j++;
            }else if(typed[j] == last)
                j++;
            else
                return false;
        }
        if( i != name.length())//still have other characters not in typed
            return false;
        if( j != typed.length()){
            while(j < typed.length()){
                if(typed[j] != last)
                    return false;
                j++;
            }
        }
        return true;
    }
};
