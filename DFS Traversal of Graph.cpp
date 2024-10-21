class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int>vis(n,0);
         vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
           {
               dfs(i,vis,res,adj);
           }
        }
       
       
          return res;  
        
    }
    void dfs(int node, vector<int>&vis, vector<int>& res, vector<vector<int>>&adj)
    {
        if(vis[node]==1)return;
        vis[node]=1;
        res.push_back(node);
        for(auto it: adj[node])
        {
            
            if(!vis[it])dfs(it,vis,res,adj);
            
        }
        
        
    }
};
