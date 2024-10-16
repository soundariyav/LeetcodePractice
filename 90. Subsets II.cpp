class Solution {
public:
    vector<int>curr;
    vector<vector<int>>ans;
    int n=0;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(),nums.end());
        dfs(0,nums);
        return ans;
    }
    void dfs(int idx,vector<int>nums)
    {
        ans.push_back(curr);
        for(int i = idx;i<nums.size();i++)
        {
            if(i>idx && nums[i-1]==nums[i])continue;
            curr.push_back(nums[i]);
            dfs(i+1,nums);
            curr.pop_back();
        }
    }
};
