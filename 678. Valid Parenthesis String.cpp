class Solution {
public:
    int n;
    string s;
    unordered_map<int,unordered_map<int,unordered_map<int,int>>>memo;
    bool checkValidString(string s) {
        this->n = s.size();
        this->s = s;
        //memo= vector<vector<int>>(s.size(),vector<int>(2,-1));
        return dp(0,0,0);
    }
    bool dp(int i,int open, int close){
        if(i>=n){
            if(open==close){
                return memo[i][open][close]=true;
            }
            return memo[i][open][close]=false;
        }
        if(memo.find(i)!=memo.end() && memo[i].find(open)!=memo[i].end() && memo[i][open].find(close)!= memo[i][open].end()){
            return memo[i][open][close];
        }
        if(open<close){
            return memo[i][open][close]=false;
        }
        bool ans;
        if(s[i]=='('){
            open+= 1;
            ans = dp(i+1,open,close);
        }
        else if(s[i]=='*'){
            ans = dp(i+1,open+1,close)|| dp(i+1,open,close+1)|| dp(i+1,open,close);
        }
        else{
            ans = dp(i+1,open,close+1);
        }
        if(ans){
            return memo[i][open][close]=true;
        }
        return memo[i][open][close]=false;
    }
};
