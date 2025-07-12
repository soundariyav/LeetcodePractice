class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        queue<pair<int,int>>q;
        if (rooms.size() == 0) return;
        for(int i=0;i<rooms.size();i++){
            for(int j=0;j<rooms[0].size();j++){
                if(rooms[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(auto [x,y]: dir){
                int nr = x+row;
                int nc = y+col;
                if(nr>= rooms.size()|| nc>= rooms[0].size()|| nr<0 || nc<0 || rooms[nr][nc]!= 2147483647){
                   continue;
                }
                 rooms[nr][nc]= rooms[row][col]+1;
                    q.push({nr,nc});
            }
        }
    }
};
