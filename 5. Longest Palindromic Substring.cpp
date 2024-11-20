class Solution {
public:
    vector<vector<bool>>dp;
    string longestPalindrome(string s) {
        int n =s.size();
        string res;
        vector<int>ans(2);
        ans = {0,0};
        dp= vector<vector<bool>>(n,vector<bool>(n,0));
        for(int i=0;i<s.size();i++)
        {
            dp[i][i]=1;
        }
        //check for 2 length substring. Generally we calculate the
        //two length substring is just checking the value at the current 
        //place and the value at the next place is correct.
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                ans = {i,i+1};
            }
        } 
        //check from 3 length till the size of the string. To do that
        //
        for(int diff =2;diff<n;diff++)
        {
            for(int i=0;i<n-diff;i++)
            {
                int j=i+diff;
                //check if the first and last element are equal 
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j]=1;
                    ans={i,j};
                }
            }
        }
        int i=ans[0];
        int j = ans[1];
        res = s.substr(i,j-i+1);
        return res;
    }
};
