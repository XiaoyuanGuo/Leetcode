class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() <= 1)
            return;
        if(nums.size() == 2){
            int a = min(nums[0], nums[1]);
            int b = max(nums[0], nums[1]);
            nums[0] = a;
            nums[1] = b;
            return;
        }
        int i = 0, j = nums.size()-1;
        for(int k = i; k <= j; k++){
            if(nums[k] == 0)
                swap(nums[k], nums[i++]);
            else if(nums[k] == 2)
                swap(nums[k--], nums[j--]);
            
        }
        
    }
};
