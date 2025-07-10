class Solution {
public:
    int n;
    vector<pair<int,int>>p;
    set<char>r[9];
    set<char>c[9];
    set<char>b[9];
    void solveSudoku(vector<vector<char>>& x) {
        
        for(int i=0;i<x.size();i++)
        {
            for(int j=0;j<x[0].size();j++)
            {
                char a = x[i][j];
                int boxi = (i/3)*3 + (j/3);
                if(x[i][j]=='.')
                {
                    p.push_back({i,j});
                }
                else{
                    r[i].insert(x[i][j]);
                    c[j].insert(x[i][j]);
                    b[boxi].insert(x[i][j]); 
                }
            }

        }
        n= p.size();
        dfs(0,x);


    }
    bool dfs(int j,vector<vector<char>>& x){
        if(j>=n)return true;
        int row = p[j].first;
        int col = p[j].second;
        for(int i=1;i<=9;i++){
            char a = i+'0';
            int boxi = (row/3)*3 + (col/3);
            if(r[row].find(a)==r[row].end() && c[col].find(a)==c[col].end() && b[boxi].find(a)==b[boxi].end()){
                x[row][col]= a;
                r[row].insert(a);
                c[col].insert(a);
                b[boxi].insert(a);
                if(dfs(j+1,x))return true;
                
                r[row].erase(a);
                c[col].erase(a);
                b[boxi].erase(a);
                x[row][col]= '.';
                
            }

        }
        return false;

    }
};
