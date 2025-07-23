class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        vector<pair<int,int>>dir={{-1,-1}, {-1,0},{-1,1},{1,-1},{1,1},{0,1},{0,-1},{1,0}};
        int n = grid.size();
        int m = grid[0].size();
        queue<tuple<int,int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,-1));
        if(grid[0][0]==1)return -1;
        q.push({0,0,1});
        while(!q.empty()){
            auto [i,j,l]= q.front();
            if(i==n-1 && j==m-1){
                return l;
            }
            q.pop();
            for(auto [x,y]: dir){
                int ni = i+x;
                int nj = j+y;
                if(ni>=0 && ni<n && nj>=0 && nj<m &&grid[ni][nj]==0 && vis[ni][nj]==-1){
                    q.push({ni,nj,l+1});
                    vis[ni][nj]=1;
                }
            }
        }
        return -1;
    }
    

};
