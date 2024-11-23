class Solution {
public:
    int m;
    int n;
    unordered_map<int,unordered_map<int,int>>cm;
    int uniquePaths(int e, int f) {
        m=e;
        n = f;
        return dfs(0,0);
    }
    int dfs(int r,int c)
    {
        if(r>=m || c>= n)return 0;
        if(r==m-1 && c==n-1)return cm[r][c]=1;
        if(cm.find(r)!=cm.end() && cm[r].find(c)!=cm[r].end())
        {
            return cm[r][c];
        }
        int res=0;
        int c1 =dfs(r+1,c);
        int c2 = dfs(r,c+1);
        res+= c1+c2;
        return cm[r][c]=res;
    }
};
