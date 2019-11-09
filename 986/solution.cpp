class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        if(A.size() == 0  || B.size() == 0)
            return {};
        vector<vector<int>> res;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int l, r;
        for(int i = 0, j = 0; i < A.size() && j < B.size(); ){
            vector<int> a = A[i];
            vector<int> b = B[j];
            l = max(a[0], b[0]);
            r = min(a[1], b[1]);
            if(l <= r){ // overlap 
                res.push_back({l,r});
            }
            if(a[1] > b[1]) j++; 
            else if(a[1] < b[1] ) i++;
            else {i++; j++;}
        }
        return res;
    }
};
