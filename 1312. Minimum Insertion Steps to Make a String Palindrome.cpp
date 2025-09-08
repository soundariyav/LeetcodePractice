class Solution {
public:
    string s;
    unordered_map<int,unordered_map<int,int>>memo;
    int minInsertions(string s) {
        this->s = s;
        return dp(0,s.size()-1);
    }
    int dp(int i,int j){
        if(i>j){
            return 0;
        }
        if(memo.find(i)!=memo.end() && memo[i].find(j)!=memo[i].end()){
            return memo[i][j];
        }
        int ans =0 ;
        if(s[i]==s[j]){
            ans = dp(i+1,j-1);
        }
        else{
            ans = min(1+dp(i,j-1),1+dp(i+1,j));
        }
        return memo[i][j]=ans;
    }
};
