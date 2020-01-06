class Solution {
public:
    int compress(vector<char>& chars) {
        int start = 0;
        int count = 1, n = chars.size();
        char last = chars[0];
        for(int i = 0; i < n; i++){
            while(i<n-1 && chars[i] == chars[i+1]){
                count++;
                i++;
            }
            chars[start++] = last;
            if(i != n-1)
                last = chars[i+1];
            if(count == 1)
                continue;
            string s = to_string(count);
            for(int j = 0; j < s.length(); j++)
                chars[start++] = s[j];
            count = 1;
        }
        return start;
    }
};
