class Solution {
public:
    vector<vector<int>>adj;
    vector<int>vis;
    bool canFinish(int N, vector<vector<int>>& pre) {
        adj = vector<vector<int>>(N);
        for (auto it : pre) 
        {
            adj[it[1]].push_back(it[0]); // add the dependent task (it[0])tothe list of its prerequisite (it[1])
        }
        int n = adj.size();
        vis = vector<int>(N,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(adj,vis,i))
                {
                    return false;
                }
            }
        }
        return true;
    
        
    }
    bool dfs(vector<vector<int>>&adj, vector<int>&vis,int v)
    {
        if(vis[v]==1)
            {
                return true;
            }
        if(vis[v]==-1)
        {
            return false;
        }
        //mark the node as visited
        vis[v]=1;
        for(auto x: adj[v])
        {
            
            if(dfs(adj,vis,x))
            {
                return true;
            }
               
        }
        vis[v]=-1;
        return false;

    }
};
