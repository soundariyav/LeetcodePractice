class Solution {
public:
    vector<vector<int>>adj;
    vector<int>v;
    stack<int>s;
    vector<int> findOrder(int N, vector<vector<int>>& pre) {
       //print the adjacency matrix
       adj = vector<vector<int>>(N);
       for (auto it : pre) 
        {
            adj[it[1]].push_back(it[0]); // add the dependent task (it[0])tothe list of its prerequisite (it[1])
        }
        v = vector<int>(N,0);
        vector<int>ans;
        for(int i=0;i<N;i++)
        {
            if(v[i]==0)
            {
                if(dfs(adj,v,i,s))
                {
                    return ans;
                }
            }
        }
        
        while(!s.empty())
        {
            int a =s.top();
            s.pop();
            ans.push_back(a);
        }
        return ans;


    }
    bool dfs(vector<vector<int>>&adj, vector<int>&v,int i,stack<int>&s)
    {
        if(v[i]==1)
        {
            return true;
        }
        if(v[i]==-1)
        {
            return false;
        }
       
        v[i]=1;
        cout<< i << " f " << endl;
        for(auto x: adj[i])
        {
            cout<< x << "ste" << endl;
            
            
                if(dfs(adj,v,x,s))
                {
                    return true;
                }
            
            
            
        }
        cout<<i << " at this time" << endl;
        v[i]=-1;
        s.push(i);
        return false;
    }

};
