class Solution {
public:
    void visit(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited, int& area){
        if(i<0 || i>=grid.size() || j <0 || j>= grid[0].size() || visited[i][j] || grid[i][j] == 0)
            return ;
        visited[i][j] = true;
        area++;
        visit(grid, i-1, j, visited, area);
        visit(grid, i+1, j, visited, area);
        visit(grid, i, j-1, visited, area);
        visit(grid, i, j+1, visited, area);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0) return 0;
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n));
        int area = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(visited[i][j] || grid[i][j] == 0)
                    continue;
                int tmp = 0;
                visit(grid, i, j, visited, tmp);
                area = max(tmp, area);
                cout<<area<<endl;
            }
        }
        
        return area;
    }
};
