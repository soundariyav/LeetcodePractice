class Solution {
public:
    unordered_map<int,unordered_map<int,int>>memo;
    string s;
    int longestPalindromeSubseq(string s) {
        this->s= s;
        return dp(0,s.size()-1);
    }
    int dp(int i,int j){
        if(i>j){
            return 0;
        }
        if(memo.find(i)!=memo.end() && memo[i].find(j)!=memo[i].end()){
            return memo[i][j];
        }
        if(i==j){
            return memo[i][j]=1;
        }
        if(s[i]==s[j]){
            return memo[i][j] = 2+ dp(i+1,j-1);

        }
        return memo[i][j]= max(dp(i+1,j),dp(i,j-1));
    }
};
