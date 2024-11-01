class Solution {
public:
    vector<vector<int>>ans;
    int n =0;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n= graph.size()-1;
        vector<int>cur;
        cur.push_back(0);
        dfs(graph,0,cur);
        return ans;
    }
    void dfs(vector<vector<int>>& graph, int source, vector<int> & cur)
    {
        if(source == n)
        {
            ans.push_back(cur);
            return;
        }
        for(auto x: graph[source])
        {
            cur.push_back(x);
            dfs(graph,x,cur);
            cur.pop_back();
        }
    }
};
