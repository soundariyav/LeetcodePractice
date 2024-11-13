class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>m;
        if(n==1)return 1;
        map<int,int>t;
        for(int i=0;i<trust.size();i++)
        {
           m[trust[i][1]]++;
           t[trust[i][0]]++;
        }
        for(auto x: m)
        {
            cout<<x.first<<endl;
            if(x.second==n-1)
            {
                if(t.find(x.first)==t.end())
                {
                    return x.first;
                }
            }
        }
        return -1;
    }
};
