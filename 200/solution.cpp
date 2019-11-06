class Solution {
public:
    void visit(vector<vector<char>>&grid, vector<vector<bool>>& visited, int x, int y){//dfs
        if(x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == '0' || visited[x][y] == true) return;
        visited[x][y] = true;
        visit(grid, visited, x-1, y);
        visit(grid, visited, x+1, y);
        visit(grid, visited, x, y-1);
        visit(grid, visited, x, y+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0; //input: [[]]
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        vector<vector<bool>> visited(m, vector<bool>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '0' || visited[i][j])//water or the node is visited
                    continue;
                visit(grid, visited, i, j);
                res++;
            }
        }
        return res;
    }
};
