class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res = "";
        sort(nums.begin(), nums.end(), [](int a, int b) {return to_string(a) + to_string(b) > to_string(b) + to_string(a);  });
        for(auto s : nums){
            res += to_string(s);
        }
        return res;
    }
     
};

//from https://www.cnblogs.com/grandyang/p/4225047.html
