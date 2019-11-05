class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int m = num1.length();
        int n = num2.length();
        int i = m-1, j = n-1;
        int carry = 0;
        while(i>=0 || j>=0 ){
            int tmp = 0;
            if(i >= 0){
                tmp += num1[i]-'0';
                i--;
            }
            if( j >= 0){
                tmp += num2[j]-'0';
                j--;
            }
            tmp += carry;
            carry = tmp/10;
            res = (char)(tmp%10 + '0') + res;
        }
       if(carry != 0)
           res = (char)(carry + '0') + res;
       return res;
    }
};
