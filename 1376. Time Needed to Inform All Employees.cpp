class Solution {
public:
    int maxTime=-1e9;
     vector<vector<int>>adj;
    int numOfMinutes(int n, int head, vector<int>& manager, vector<int>& inform) {
        // create a adjacency list
       adj =  vector<vector<int>>(n);
        for(int i=0;i<manager.size();i++)
        {
            if(manager[i]!=-1)
            {
                adj[manager[i]].push_back(i);
            }
        }
        dfs(head,0,inform);
        return maxTime;
        
    }
    void dfs(int cur, int time, vector<int>&inform)
    {
        maxTime= max(maxTime,time);
        for(auto x: adj[cur])
        {
            dfs(x,time + inform[cur],inform);
        }
    }
};
