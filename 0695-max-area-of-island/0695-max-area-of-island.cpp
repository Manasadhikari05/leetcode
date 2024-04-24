class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int m,int n,int &x)
    {
        if(i<0 || i>=m ||j<0 || j>=n || grid[i][j]!=1)
        {
            return;
        }
        grid[i][j]=-1;
        x++;
        dfs(grid,i+1,j,m,n,x);
        dfs(grid,i-1,j,m,n,x);
        dfs(grid,i,j+1,m,n,x);
        dfs(grid,i,j-1,m,n,x);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int area=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int x=0;
                    dfs(grid,i,j,m,n,x);
                    area=max(area,x);
                }
            }
        }
        return area;
    }
};