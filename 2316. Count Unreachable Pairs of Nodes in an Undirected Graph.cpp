class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& e) {
        // find the connected components and the no of components inside int

        vector<vector<int>>adj(n);
        for(int i=0;i<e.size();i++){
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }
        vector<int>vis(n,0);
        vector<int>ans;
        int count = 0;
        for(int i=0;i<adj.size();i++){
            if(vis[i]==0){
               count++;
               int v= dfs(i,vis,adj);
               //cout<< count<<" and. "<< v<< "and i " << i<< endl;
               ans.push_back(v+1);
            }
        }
        int res= 0;
        long long total = 0;
        long long sum = 0;
        for(int x: ans){
            total += sum * x;
            sum += x;
        }
        return total;
        //cout<<count<<endl;
        
    }
    int dfs(int node, vector<int>&vis,vector<vector<int>>&adj){
        
         vis[node] = 1;
         int c = 0;
         for(auto x: adj[node]){
             if(vis[x]==0){
             c+= 1 + dfs(x,vis,adj);
             }
         }
         return c;
    }
    
};
