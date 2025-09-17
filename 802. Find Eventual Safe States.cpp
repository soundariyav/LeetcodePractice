class Solution {
public:
    unordered_set<int>safe;
    unordered_set<int>notsafe;
    unordered_set<int>terminal;
    vector<int>vis;
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        //vector<vector<int>>adj(graph.size());
        vis = vector<int>(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(graph[i].size()==0){
                terminal.insert(i);
            }    
        }
        vector<int>res;
        for(int i=0;i<graph.size();i++){
            if(dfs(i,graph)){
                res.push_back(i);
            }
        }
        return res;
    }
    bool dfs(int node,vector<vector<int>>& graph){
        if(vis[node]==1){
            return false;
        }
        if(safe.find(node)!=safe.end())
        {
            return true;
        }
        if(terminal.find(node)!=terminal.end()){
            return true;
        }
        if(notsafe.find(node)!= notsafe.end()){
            return false;
        }
        bool ans = true;
        vis[node]=1;
        for(auto x: graph[node]){
            ans = ans & dfs(x,graph);

        }
        vis[node]=2;
        if(ans==true){
            safe.insert(node);
        }
        else{
            notsafe.insert(node);

        }
        return ans;
    }
};
