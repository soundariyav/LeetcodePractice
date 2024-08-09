class Solution {
public:
int numMagicSquaresInside(vector<vector<int>>& grid) {
    int res = 0;
    for (int i = 0;i+2<grid.size();i++)
    {
        for(int j=0;j+2<grid.size();j++)
        {
            cout << grid[i][j] << endl;
            res= res + magSq(grid,i,j);
        }
    }
    return res;
    
    
}

int magSq(vector<vector<int>>& g, int r, int c)
{
    int count = 0;
    int a = g[r][c];
    int b = g[r][c+1];
    int p = g[r][c+2];
    int d = g[r+1][c];
    int e = g[r+1][c+1];
    int f = g[r+1][c+2];
    int h = g[r+2][c];
    int k = g[r+2][c+1];
    int l = g[r+2][c+2];
    bool val = checkdis(a,b,p,d,e,f,h,k,l);
    if(!(val == true))
    {
        return 0;
    }
    int rs1 =  a+b+p;
    cout << rs1 << endl;
    int rs2 = d+e+f;
    cout << rs2 << endl;
    int rs3 = h+k+l;
    cout << rs3 << endl;
    int cs1 = a+d+h;
    cout << cs1 << endl;
    int cs2 = b+e+k;
    cout << cs2 << endl;
    int cs3 = p+f+l;
    cout << cs3 << endl;
    int d1 = a +e+l;
    cout << d1 << endl;
    int d2 = p+e+h;
    cout << d1 << endl;
    if((rs1 == rs2) && (rs2 == rs3)&&(rs3 == cs1) && (cs1==cs2) && (cs2==cs3) &&(cs3 == d1) &&(d1==d2))
    {
        cout << "All vales are same " << endl;
        count = count+1;
        
    }
    cout<< count << "is" << endl;
    return count;

    
}

bool checkdis(int a,int b,int p,int d,int e, int f,int h,int k,int l)
{
    vector<int>v(10);
    vector<int>s = {a,b,p,d,e,f,h,k,l};
    for(int i = 0;i<s.size();i++)
    {
        if(checknum(s[i])==false)
        {
            cout<< "check num failed for value " << i << endl;
            return false;
        }
        
    }
    
    
    v[a]++;
    v[b]++;
    v[p]++;
    v[d]++;
    v[e]++;
    v[f]++;
    v[h]++;
    v[k]++;
    v[l]++;
    for(int i =1;i<v.size();i++)
    {
        if(!(v[i]==1))
        {
            return 0;
        }
    }
    return true;


}
bool checknum (int x)
{
    if(!(x>0 && x <10))
    {
        cout<< x << "is not in value" << endl;
        return false;
        
    }
    return true;
}
};
