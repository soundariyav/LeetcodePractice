class Solution {
    const vector<pair<int,int>>directions = {{-1,0},{0,1},{1,0},{0,-1}};
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>>visited = grid;
        queue<pair<int,int>>q;
        int good = 0;
        int minutes = -1;
        for(int i= 0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(visited[i][j]==2)
                {
                    q.push({i,j});
                }
                if(visited[i][j]==1)
                {
                    good++;
                }
            }
        }
        if(good ==0)
        {
            return 0;
        }
        if(q.empty())
        {
            return -1;
        }
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                auto [x,y]=q.front();
                q.pop();
                for(auto &dir : directions)
                {
                    int i = x+dir.first;
                    int j = y+dir.second;
                    if(i>=0 && i<r && j>=0 && j<c && visited[i][j]==1)
                    {
                        visited[i][j]=2;
                        q.push({i,j});
                        good--;
                    }
                }
            }
            minutes++;

        }
        if(good==0)
        {
            return minutes;
        }

        return -1;
    }
};
