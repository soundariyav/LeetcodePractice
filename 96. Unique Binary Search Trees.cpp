class Solution {
public:
    vector<int>a;
    vector<int>m;
    int numTrees(int n) {
    for(int i=1;i<=n;i++)
    {
        a.push_back(i);
    } 
    m= vector<int>(n+1,-1);
        int ans = dp(a);
        return ans;
    }
    int dp(vector<int>a)
    {
        if(a.size()==1)
        {
            return m[a.size()]=1;
        }
        if(m[a.size()]!=-1)return m[a.size()];
        if(a.empty())return 1;
        int res=0;
        for(int i=0;i<a.size();i++)
        {
            vector<int>l;
            vector<int>r;
            int root= a[i];
            for(int j=0;j<=i-1;j++)
            {
                l.push_back(a[j]);
            }
            for(int j=i+1;j<=a.size()-1;j++)
            {
                r.push_back(a[j]);
            }
            res+= dp(l) * dp(r);
            
        }
        return m[a.size()]=res;
    }
};
