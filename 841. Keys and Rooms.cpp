class Solution {
public:
    vector<int>vis;
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
         vis = vector<int>(rooms.size(),0);
         dfs(0,rooms);
         for(auto x: vis){
            if(x==0){
                return false;
            }
         }
        return true;
    }
    void dfs(int x,vector<vector<int>>& rooms){
        vis[x]=1;
        for(auto y: rooms[x]){
            if(vis[y]==0){
                dfs(y,rooms);
            }
        }
        return;
    }
};
