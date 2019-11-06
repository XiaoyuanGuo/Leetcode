class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {//bfs
        if(grid.size() == 0 ||  grid[0].size() == 0)
            return 0;
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        vector<vector<bool>>visited (m, vector<bool>(n));
        vector<int> dirX = {-1, 0, 1, 0};
        vector<int> dirY = {0, 1, 0, -1};
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(visited[i][j] || grid[i][j] == '0') continue;
                res++;
                queue<int> q {{i*n+j}};
                while(!q.empty()){
                    int t = q.front(); q.pop();
                    int x = t/n, y = t%n;
                    visited[x][y] = true;
                    for(int k = 0; k < 4; k++){
                        if(x+dirX[k]>=m || x+dirX[k]<0 || y+dirY[k] >= n || y+dirY[k] < 0 || visited[x+dirX[k]][y+dirY[k]] || grid[x+dirX[k]][y+dirY[k]] == '0') continue;
                        q.push((x+dirX[k])*n+y+dirY[k]);
                    }
                }
            }
        }
        return res;
    }
};
