class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        int left, right;
        vector<vector<int>> res;
        for(int i = 0; i < intervals.size(); i++){
            vector<int> tmp = intervals[i];
            if(i == 0){
                left = tmp[0];
                right = tmp[1];
            }else{
                if(tmp[0] >= left && tmp[0] <= right){
                    if(tmp[1] <= right)//in the same range
                        continue;
                    else{
                        right = tmp[1];//update right 
                    }
                }else{
                    if(tmp[0] > right){
                        res.push_back({left, right});
                        left = tmp[0];
                        right = tmp[1];
                    }
                }
                
            }
                
        }
        res.push_back({left, right});
        return res;
    }
};
