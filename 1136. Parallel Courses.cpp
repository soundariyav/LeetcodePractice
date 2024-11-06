class Solution {
public:
    vector<vector<int>>adj;
    int minimumSemesters(int n, vector<vector<int>>& r) {
        adj = vector<vector<int>>(n+1);
        for(auto it: r)
        {
             adj[it[0]].push_back(it[1]);
        }
        
        vector<int>in(n+1,0);
        // fill in the indegree for all the vertices
        for(int i=1;i<n+1;i++)
        {
            for(auto x: adj[i])
            {
                in[x]++;
            }
        }
        //push the vertices which does not require any pre
        vector<int>q;
        int count=0;
        for(int i=1;i<n+1;i++)
        {
            if(in[i]==0)
            {
                q.push_back(i);
            }
        }
        
        int step=0;
        int vc =0;
        
        
        vector<int>top;
        while(!q.empty())
        {
            // starting a new semester
            count++;
            vector<int>ns;
            for(auto node : q)
            {
                vc++;
                for(auto x: adj[node])
                {
                
                    in[x]--;
                    if(in[x]==0)
                    {
                        
                        ns.push_back(x);
                    }
                }
            }
            q= ns;
        }

        return vc==n ? count : -1;

    }
    
};
