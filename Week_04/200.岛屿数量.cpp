/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = { 0, 0, -1, 1};
    int numIslands(vector<vector<char>>& grid) {

        int islands = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if( grid[i][j] == '1'){
                    DFS(grid, i, j);
                    islands++;
                }

            }
        }
        return islands;
    }

    void DFS(vector<vector<char>>& grid, int row, int col){
        if (grid[row][col] == '0') return;

        grid[row][col] = '0';

        for (int k = 0; k < 4 ;k++){
            int x = row + dx[k];
            int y = col + dy[k];
            if ( x >=0 && x < grid.size() && y >= 0 && y < grid[0].size()){
                if ( grid[x][y] == '0') continue;
                DFS(grid, x, y);
            }
        }
        return ;
    }
};
// @lc code=end

