class Solution {
public:
    vector<int> sortByAbsoluteValue(vector<int>& nums) {
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back({abs(nums[i]),i});
        }
        sort(ans.begin(),ans.end());
        vector<int>res;
        for(int i=0;i<ans.size();i++){
            int v = ans[i].second;
            res.push_back(nums[v]);
        }
        return res;
    }
};
