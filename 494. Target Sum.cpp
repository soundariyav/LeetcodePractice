class Solution {
public:
    unordered_map<int,unordered_map<int,int>>memo;
    int t=0;
    int findTargetSumWays(vector<int>& nums, int target) {
        t= target;
        return dp(0,0,nums);
    }
    int dp(int i,int sum,vector<int>& nums){
        if(i==nums.size() && sum ==t){
            return 1;
        }
        if(i>=nums.size()){
            return 0;
        }
        if(memo.find(i)!=memo.end() && memo[i].find(sum)!= memo[i].end()){
            return memo[i][sum];
        }
        int c1 = dp(i+1,sum+nums[i],nums);
        int c2 = dp(i+1,sum-nums[i],nums);
        return memo[i][sum]= c1+c2;
    }
};
