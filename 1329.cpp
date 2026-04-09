class Solution {
public:
    int m;
    int n;
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        m = mat.size();
        n = mat[0].size();
        vector<vector<int>>ans = mat;
        // start with just 0
        int i=0;
        int j= 0;
        vector<int>r;
        while(i<m && j<n){
            r.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(r.begin(),r.end());
        fill(ans,0,0,r);
        // iterate row 
        i=0;
        for(int j=1;j<n;j++){
            // fix a row and start from there
            
            int k=i;
            int col = j;
            vector<int>r;
            while(k<m && col<n){
                r.push_back(mat[k][col]);
                k++;
                col++;
            }
            sort(r.begin(),r.end());
            fill(ans,i,j,r);
        }
        // now fix the col as 0
        j = 0;
        for(int i=1;i<m;i++){
            int k=i;
            int col = j;
            vector<int>r;
            while(k<m && col<n){
                r.push_back(mat[k][col]);
                k++;
                col++;
            }
            sort(r.begin(),r.end());
            fill(ans,i,j,r);
        }
        return ans;
    }
    void fill(vector<vector<int>>&ans, int row, int col, vector<int>f){
        int k = 0;
        int i = row;
        int j = col;
         while(i<m && j<n){
             ans[i][j]= f[k];
             i+=1;
             j+=1;
             k++;
         }
         
    }
};
