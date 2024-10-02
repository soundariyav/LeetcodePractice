class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid,perimeter);
                    return perimeter;
                }
            }
        }
        return perimeter;
    }
    void dfs(int i,int j,vector<vector<int>>& grid,int & perimeter)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
        {
            perimeter++;
            return;
        }
        if(grid[i][j]==0)
        {
            perimeter++;
            return;
        }
        if(grid[i][j]==-1)
        {
            return;
        }
        grid[i][j]=-1;
       dfs(i + 1, j, grid, perimeter);
        dfs(i - 1, j, grid, perimeter);
        dfs(i, j + 1, grid, perimeter);
        dfs(i, j - 1, grid, perimeter);
       // return

    }

};
