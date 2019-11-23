class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1){
            int sum = 0;
            string s = to_string(n);
            int i = 0;
            while(i<s.length()){
                sum += (s[i] - '0')*(s[i] - '0');
                i++;
            }
            n = sum;
            if(st.count(n)) break;
            st.insert(n);
        }
        return n==1;
    }
};

 
