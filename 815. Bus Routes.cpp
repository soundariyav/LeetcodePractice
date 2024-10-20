class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& r, int source, int target) {
        if(source==target)return 0;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<r.size();i++)
        {
            for(auto ch : r[i])
            {
                m[ch].push_back(i);
            }
        }
        //create an empty queue
        queue<int>q;
        unordered_set<int>vis;
        // iterate the routes in source and push it to queue
        for(auto r : m[source])
        {
            q.push(r);
            vis.insert(r);
        }
        int count=1;
        while(q.size())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                int a= q.front();
                q.pop();
                for(auto ch: r[a])
                {
                    if(ch==target)
                    {
                        return count;
                    }
                    //check for next route
                    for(auto x : m[ch])
                    {
                        if(vis.find(x)==vis.end())
                        {
                            vis.insert(x);
                            q.push(x);
                        }
                    }
                }
            }
            count++;

        }
        return -1;
    }
};
