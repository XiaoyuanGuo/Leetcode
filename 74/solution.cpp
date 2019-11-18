class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int m = matrix.size();
        int n = matrix[0].size();
        if(target < matrix[0][0] || target > matrix[m-1][n-1])
            return false;
        int i = 0;
        while(i < m && target>matrix[i][n-1])
                i++;
        cout<<i<<endl;
        for(int j = 0; j < n; j++){
            if(target == matrix[i][j])
                return true;
        }
        
        return false;
        
    }
};
