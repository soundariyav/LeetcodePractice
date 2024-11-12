class Solution {
public:
    vector<vector<int>>adj;
    vector<int>vis;
    int count=0;
    int countComponents(int n, vector<vector<int>>& edges) {
        adj = vector<vector<int>>(n);
        vis = vector<int>(adj.size(),0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<adj.size();i++)
        {
            if (vis[i] == 0) { // If the node is not visited, it means we found a new component
                dfs(i,vis); // Start DFS from this node
                count++; // Increase count for each new connected component
            }
        }
        return count;

    }
    void dfs(int n,vector<int>&vis)
    {
        if(vis[n]!=0)
        {
            return;
        }
        vis[n]=1;
        for(auto x: adj[n])
        {
            
            
            if(vis[x]==0)
            {
            dfs(x,vis);
            }
        }

    }
};
