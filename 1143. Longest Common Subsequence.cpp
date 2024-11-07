class Solution {
public:
    vector<vector<int>>memo;
    string t1;
    string t2;
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m = text2.size();
        t1= text1;
        t2 = text2;
        memo=vector<vector<int>>(n+1,vector<int>(m+1,-1));
        if(n==0 || m==0)return 0;
        return dp(0,0);
    }
    int dp(int p1, int p2)
    {
        if (p1 == t1.size() || p2 == t2.size()) return 0;
        if(memo[p1][p2]!=-1)return memo[p1][p2];
        int ans=0;
        if(t1[p1]==t2[p2])
        {
            ans= 1+ dp(p1+1,p2+1);
        }
        else
        {
            ans = max(dp(p1+1,p2), dp(p1,p2+1));
        }
        memo[p1][p2]=ans;
        return memo[p1][p2];
    }
};
