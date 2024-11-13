class Solution {
public:
    vector<vector<int>>adj;
    vector<int>vis;
    int count;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        count=0;
        //create a adjacency list
        adj = vector<vector<int>>(n);
        vis = vector<int>(n,0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][1]].push_back(edges[i][0]);
             adj[edges[i][0]].push_back(edges[i][1]);
        }
        dfs(source,destination);
        if(count>=1)return true;
        return false;
        
    }
    void dfs(int source, int destination)
    {
        //cout<<source<<endl;
        if(source==destination)
        {
            //cout<<"yes"<<endl;
            count++;
            return;
            
        }
        if(vis[source]!=0)
        {
            return;
        }
        vis[source]=1;
        for(auto x: adj[source])
        {
            dfs(x,destination);
            
        }
       
    }
};
