class Solution {
public:
    vector<int>vis;
    int count=0;
    int findCircleNum(vector<vector<int>>& c) {
        int n = c.size();
        vis = vector<int>(n,-1);
        for(int i=0;i<c.size();i++){
            if(vis[i]==-1){
                count++;
                dfs(i,c);
            }
        }
        return count;
    }
    void dfs(int i, vector<vector<int>>& c){
            vis[i]= 1;
            for(int j=0;j<c.size();j++){
                if(c[i][j] && vis[j]==-1){
                    dfs(j,c);
                }
            }
    }
    

};
