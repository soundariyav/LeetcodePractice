class Solution {
public:
vector<vector<vector<int>>>pfx;
int m;
int n;
    int countLocalMaximums(vector<vector<int>>& matrix) {
        // prefix sum 
         m = matrix.size();
         n = matrix[0].size();
        pfx.resize(201,vector<vector<int>>(m+1,vector<int>(n+1,0)));
        for(int l=0;l<=200;l++){
            for(int i=0;i<matrix.size();i++){
                int rs =0;
                for(int j=0;j<matrix[0].size();j++){
                     if(matrix[i][j]>l){
                         rs++;
                     }
                     pfx[l][i+1][j+1] = rs + pfx[l][i][j+1];
                }
            }
        }
        int ans=0;
        // now check for every non zero cell if it is a local maximum 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=0){
                    if(check(i,j,matrix))ans++;
                }
            }
        }
        return ans;
    }
    bool check(int i,int j,vector<vector<int>>& matrix){
        int x = matrix[i][j];
        int r1 = max(0,i-x); 
        int r2= min(m-1,i+x); 
        int c1 = max(0,j-x);
        int c2= min(n-1,j+x); 
        int cnt=pfx[x][r2+1][c2+1]-pfx[x][r1][c2+1]+pfx[x][r1][c1]-pfx[x][r2+1][c1];
        int dr[4] = {-x,-x, x,x};
        int dc[4] = {-x,x, -x,x};
        for(int k=0;k<4;k++){
            int ni = i+dr[k];
            int nj = j + dc[k];
            if(ni>=0 && ni<m && nj>=0  && nj<n  && matrix[ni][nj]>x){
                cnt--;
            }
        }
        return cnt ==0;


    }
    
    
};
