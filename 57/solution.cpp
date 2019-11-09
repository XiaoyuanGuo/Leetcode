class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        if(n == 0)
            return {newInterval};
        int l, r;
        vector<vector<int>> res;
        for(int i = 0; i < n; i++ ){
            vector<int> tmp = intervals[i];
            l = max(tmp[0], newInterval[0]);
            r = min(tmp[1], newInterval[1]);
            if(l>r){//no overlap
                if(tmp[0] > newInterval[0]){
                    res.push_back(newInterval);
                    for(; i < n; i++)
                        res.push_back(intervals[i]);
                    return res;
                }else{
                    res.push_back(intervals[i]);
                }
            }
            else{//overlap
                newInterval[0] = min(tmp[0], newInterval[0]);
                newInterval[1] = max(tmp[1], newInterval[1]);
            }
        }
        res.push_back(newInterval); 
        return res;
    }
};
