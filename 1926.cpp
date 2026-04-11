class Solution {
public:
    int n=0;
    int m = 0;
    vector<vector<int>>vis;
    vector<vector<int>>d{{-1,0},{1,0},{0,1},{0,-1}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
       int a = entrance[0];
       int b = entrance[1];
       queue<vector<int>>q;
       n = maze.size();
       m= maze[0].size();
       vis = vector<vector<int>>(n,vector<int>(m,-1));
       vis[a][b] = 1;
       q.push({a,b,0});
       while(!q.empty()){
            int size = q.size();
            for(int k=0;k<size;k++){
                 auto x = q.front();
                 int step = x[2];
                 int i = x[0];
                 int j = x[1];
                 //cout<< "the enter part " << i << " and " << j << endl;
                 q.pop();
                 // if entrance dont check for exit condition;
                if(i==a && j==b){

                }else{
                    //cout<< " want to check entrance "<< endl;
                    if(checkentrance(i,j)) return step;
                }
                for(int u = 0;u< d.size();u++){
                    int ni = i + d[u][0];
                    int nj = j+ d[u][1];
                    //cout<< ni << " and " << nj << "after for "<< endl;
                    if(!checkoob(ni,nj)){
                        continue;
                    }
                    if(maze[ni][nj]=='+'){
                        continue;
                    }
                    vis[ni][nj]=1;
                    q.push({ni,nj,step+1});
                }
            }
           
        }
        return -1;
      
    }
       bool checkentrance(int i,int j){
           // cout<< " came here for entrance check "<< endl;
            if(i==n-1 || j==m-1 || i==0 || j==0){
                return true;
            }
            return false;
       }
       bool checkoob(int i,int j){
       // cout<< i << " and new "<< j << endl;
            if(i<n && i>=0 && j<m  && j>=0){
                if(vis[i][j]!=1){
                    return true;
                }
                
            }
        //cout<<"false "<< endl;
            return false;
       }
        

    
};
