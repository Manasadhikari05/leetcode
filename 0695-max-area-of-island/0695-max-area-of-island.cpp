class Solution {
public:
    void dfs(vector<vector<int>>& grid, int m, int n, int i, int j, int& currentArea) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1) {
            return;
        }
        grid[i][j] = -1;
        currentArea++;
        dfs(grid, m, n, i + 1, j, currentArea);
        dfs(grid, m, n, i - 1, j, currentArea);
        dfs(grid, m, n, i, j + 1, currentArea);
        dfs(grid, m, n, i, j - 1, currentArea);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxArea = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int currentArea = 0; // Correctly initialize currentArea here
                    dfs(grid, m, n, i, j, currentArea);
                    maxArea = max(maxArea, currentArea);
                }
            }
        }
        return maxArea;
    }
};
