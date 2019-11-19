class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int mxArea = 0;
        while(left<right){
            int curArea = min(height[left],height[right])*(right-left);
            mxArea = max(mxArea, curArea);
            if(height[left]<height[right]){
                left++;
            }else if(height[left]>height[right]){
                right--;
            }else{
                left++;
                right--;
            }
        }
        return mxArea;
    }
};
