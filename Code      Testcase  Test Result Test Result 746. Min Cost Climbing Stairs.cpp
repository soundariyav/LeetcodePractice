class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Use a bottow up approach
        int n= cost.size();
        vector<int>dp(n+1);
        dp[0]= cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++)
        {
            dp[i]= min(dp[i-1],dp[i-2])+ cost[i];
        }
        int ans = min(dp[n-1],dp[n-2]);
        return ans;
    }
};
