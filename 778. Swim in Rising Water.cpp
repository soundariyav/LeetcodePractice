class Solution {
public:
    vector<pair<int,int>>dir{{-1,0},{1,0},{0,1},{0,-1}};
    int n;
    vector<vector<int>>grid;
    int m;
    int swimInWater(vector<vector<int>>& grid) {
         n = grid.size();
         m = grid[0].size();
         this->grid = grid;
        int low = grid[0][0];
        int high= (grid.size()* grid.size())-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(valid(mid)){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    bool valid(int water){
        vector<vector<bool>>vis(n,vector<bool>(m,0));
       
        return dfs(0,0,water,vis);

    }
    bool dfs(int i,int j,int water,vector<vector<bool>>&vis){
        
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1 || grid[i][j]>water){
            return false;
        }
        vis[i][j]=1;
        if(i==n-1 && j==m-1){
            return true;
        }
        for(int l=0;l<dir.size();l++){
            int r = i+dir[l].first;
            int c = j+dir[l].second;
            if(dfs(r,c,water,vis))return true;
        }
        return false;
    }
    
};
