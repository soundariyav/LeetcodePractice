class Solution {
public:
    vector<int>p;
    vector<vector<int>>memo;
    int size;
    int MOD = 1e9+7;
    int numberOfWays(int n, int x) {
        memo =vector<vector<int>>(302,vector<int>(302,-1));
       for(int i=1;i<=n;i++){
          long long power=  binExp(i,x);
          if(power>n){
            break;
          }
          p.push_back((int)power);
       }
       for(auto x: p){
        cout<<x<<" ";
       }
       size = p.size();
       return dfs(0,n);
    }
    long long binExp(long long a, long long b) {
        long long result = 1;
        while (b > 0) {
            if (b & 1) {   // if b is odd
                result *= a;
            }
            a *= a;        // square the base
            b >>= 1;       // divide exponent by 2
        }
        return result;
    }
    int dfs(int pos,int t){
        if(t==0)return 1;
        if(pos>=size || t<0){
            return 0;
        }
        if(memo[pos][t]!=-1)return memo[pos][t];
        int e = dfs(pos+1,t);
        int i = dfs(pos+1,t-p[pos]);
        return memo[pos][t]= (e+i)%MOD;
    }
};
