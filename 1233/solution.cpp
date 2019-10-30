class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        int n = folder.size();
        if ( n <= 1 )
            return folder;
        sort(folder.begin(), folder.end());
        string str = folder[0];
        vector<string> res;
        res.push_back(str);
        for(int i = 1; i < n; i++){
            int m = str.length();
            if(folder[i].compare(0,m,str) != 0 ||(folder[i].compare(0,m,str) == 0 && folder[i].length() > m&& folder[i][m] != '/')){
                str = folder[i];
                res.push_back(str);
            }
        }
        return res;
    }
};
