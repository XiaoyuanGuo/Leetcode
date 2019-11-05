class Solution {
public:
    int gcd(int m, int n){
        return n == 0 ? m : gcd(n, m % n);
    }
    bool isGoodArray(vector<int>& nums) {
        if(nums.size()==0)//border case
            return false;
        if(nums.size() == 1){ //border case
            if(nums[0] == 1)
                return true;
            return false;
        }
        int t = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(gcd(t, nums[i]) == 1)
                return true;
            else
                t = gcd(t, nums[i]);//get the greatest common divisor
        }
         return false;
    }
   
};
