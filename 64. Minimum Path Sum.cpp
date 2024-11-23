class Solution {
public:
    int n;
    int m;
    unordered_map<int,unordered_map<int,int>>cm;
    int minPathSum(vector<vector<int>>& grid) {
        n= grid.size();
        m = grid[0].size();
        return dfs(0,0,grid);
    }
    int dfs(int r,int c,vector<vector<int>>& grid )
    {
        if(r>=n || c>=m)
        {
            return cm[r][c]=1e9;
        }
        if(r==n-1 && c==m-1)return cm[r][c]=grid[r][c];
        if(cm.find(r)!=cm.end()&& cm[r].find(c)!=cm[r].end())
        {
            return cm[r][c];
        }
        int res=0;
        int c1 = dfs(r+1,c,grid);
        int c2= dfs(r, c+1,grid);
        res = min(c1,c2) + grid[r][c];
        return cm[r][c]=res;
    }

};
