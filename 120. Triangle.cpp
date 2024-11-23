class Solution {
public:
    int n;
    unordered_map<int,unordered_map<int,int>>m;
    int minimumTotal(vector<vector<int>>& t) {
         n = t.size();

        return dfs(0,0,t);

    }
    int dfs(int r,int c,vector<vector<int>>& t)
    {
        if((m.find(r)!=m.end()) && (m[r].find(c)!=m[r].end()))
        {
            return m[r][c];
        }
        
        if(r>=n)return 0;
        
        int res=1e9;
        int c1=dfs(r+1,c,t);
        int c2= dfs(r+1,c+1,t);
       // cout<< c1 << c2 <<endl;
        res = min(c1,c2)+ t[r][c];
        return m[r][c]=res;
    }
};
