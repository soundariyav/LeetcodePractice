class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int>dp(n+1);
        long long share = 0;
        int res= 0;
        dp[1]= 1;
        int mod =  1e9 + 7;
        for(int i=2;i<=n;i++){
            dp[i]= share = (share+ dp[max(i-delay,0)]-dp[max(i - forget, 0)] + mod) % mod;
        }
        for(int i=n-forget+1;i<=n;i++){
            res += dp[i];
            res%= mod;
        
        }
        return res;
          
         
    }
};
