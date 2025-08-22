class Solution {
public:
    vector<vector<int>>dp;
    int n;
    int m;
    int minFallingPathSum(vector<vector<int>>& matrix) {
         n = matrix.size();
         m = matrix[0].size();
        dp = vector<vector<int>>(n,vector<int>(m,1e9));
        int i= n-1;
        for(int j=0;j<m;j++){
            dp[i][j]= matrix[i][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                int one=1e9;
                int two=1e9;
                int three=1e9;
                if(i+1< n && j-1>=0){
                    one = dp[i+1][j-1];
                }
                if(i+1<n && j>=0){
                    two = dp[i+1][j];
                }
                if(i+1<n && j+1<m){
                    three= dp[i+1][j+1];
                }
                int v = min({one,two,three});
                dp[i][j] = matrix[i][j]+ v;
            }
        }
        i= 0;
        int res=1e9;
        for(int j=0;j<n;j++){
            res = min(res,dp[i][j]);
        }
        return res;
    }
    
};
