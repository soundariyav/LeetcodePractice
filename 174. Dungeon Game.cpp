class Solution {
public:
    int m;
    int n;
    vector<vector<int>>v;
    vector<vector<int>>memo;
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        // Dungeon game
        v=dungeon;
        n = v.size();
        m = v[0].size();
        memo = vector<vector<int>>(n,vector<int>(m,-10001));
        return dp(0,0);

    }
    int dp(int i,int j){
        if(i>=n || j>=m){
            return INT_MAX;
        }
        if(memo[i][j]!= -10001){
            return memo[i][j];
        }
        if(i==n-1 && j==m-1){
            return memo[i][j]= max(1,1-(v[i][j]));
        }
        int right = dp(i,j+1);
        int down = dp(i+1,j);
        int mr = min(right,down);
        int result = max(1, (mr-v[i][j]));
        return memo[i][j]=result;
    }
};
