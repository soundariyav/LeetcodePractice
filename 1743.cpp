class Solution {
public:
    unordered_map<int,int>mp;
    unordered_map<int,int>st;
    unordered_set<int>vis;
    unordered_map<int,int>mp1;
    vector<vector<int>>adj;
    vector<int> restoreArray(vector<vector<int>>& a) {
        int n = a.size()+1;
        adj = vector<vector<int>>(n);
        for(auto x: a){
            st[x[0]]++;
            st[x[1]]++;
        }
        int i = 0;
        int head = 0;
        int val = 0;
        for(auto [k,v]:st){
            mp[k] = i;
            mp1[i] = k;
            if(v==1){
                head = i;
                val = k;
            }
            i++;
        }
        for(auto x: a){
            int u = mp[x[0]];
            int v = mp[x[1]];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>cur;
        
        dfs(head,cur);
        return cur;
    
    }
    void dfs(int node, vector<int>& cur){
        if(vis.find(node)!=vis.end()){
            return;
        }
        int val = mp1[node];
        cur.push_back(val);
        vis.insert(node);
        for(auto x: adj[node]){
            dfs(x,cur);
        }
        return;
    }
};
