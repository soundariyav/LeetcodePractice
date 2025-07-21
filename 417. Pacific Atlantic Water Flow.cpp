class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        int rows = h.size();
        int col = h[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(rows,vector<int>(col,0));
        set<pair<int,int>>st;
        // Pacific Call Right
        int i=0;
        for(int j=0;j<col;j++){
            q.push({i,j});
            vis[i][j]=-1;
        }
        //Pacific Call Left
        int j=0;
        for(int i=0;i<rows;i++){
            q.push({i,j});
            vis[i][j]= -1;
        }
       
        vector<pair<int,int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        while(!q.empty()){
            auto [i,j]= q.front();
            q.pop();
            st.insert({i,j});
            int hei = h[i][j];
            for(auto [x,y]: dir){
                int ni = i+x;
                int nj = j+y;
                if(ni<0 || ni>=rows || nj<0 || nj>=col || h[ni][nj]<hei || vis[ni][nj]==-1){
                    continue;
                }
                else{
                    q.push({ni,nj});
                    vis[ni][nj]=-1;
                }
            }
        }
        
        //cout<<"hel1";
        q= queue<pair<int,int>>();
        vis = vector<vector<int>>(rows,vector<int>(col,0));
        set<pair<int,int>>st1;
        // Atlantic Ocean Right
        j= col-1;
        for(int i=0;i<rows;i++){
            q.push({i,j});
            vis[i][j]=-1;
        }
        //AO Left
        i = rows-1;
        for(int j=0;j<col;j++){
            q.push({i,j});
            vis[i][j]=-1;
        }
        while(!q.empty()){
            auto [i,j]= q.front();
            q.pop();
            st1.insert({i,j});
            int hei = h[i][j];
            for(auto [x,y]: dir){
                int ni = i+x;
                int nj = j+y;
                if(ni<0 || ni>=rows || nj<0 || nj>=col || h[ni][nj]<hei || vis[ni][nj]==-1){
                    continue;
                }
                else{
                    q.push({ni,nj});
                    vis[ni][nj]=-1;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto x: st){
           if(st1.find(x)!= st1.end()){
               int i = x.first;
               int j = x.second;
               auto v = {i,j};
               ans.push_back(v);
           }
        }
        
       
        return ans;

    }
};
