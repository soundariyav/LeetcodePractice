class Solution {
public:
    vector<vector<int>> coins;
    int n;
    int m;
    vector<vector<vector<int>>>memo;
    int maximumAmount(vector<vector<int>>& coins) {
        this->coins = coins;
        n = coins.size();
        m = coins[0].size();
        memo.assign(n, vector<vector<int>>(m, vector<int>(3, -1e9)));
        return dp(0,0,2);
    }
    int dp(int i, int j, int k){
      
        if(i<0 || j<0 || i>=n || j>=m){
            return -1e9;
        }
        if(i==n-1 && j==m-1){
            if(coins[i][j] < 0 && k > 0) return 0;
            return coins[i][j];
        }
        if(memo[i][j][k]!=-1e9){
            return memo[i][j][k];
        }
        // if not thief
        int res = -1e9;
        res  = max(res,coins[i][j]+ dp(i,j+1,k));
        res = max(res,coins[i][j]+ dp(i+1,j,k));
        if(k>0 && coins[i][j]<0){
            res = max(res,dp(i,j+1,k-1));
            
            res = max(res,dp(i+1,j,k-1));
            
            
        }
        
        //cout<< profit1<< " "<< profit2<<" "<< profit3<< endl;
        return memo[i][j][k]= res; 
       
            // if its a thief
            
        
    }
};
