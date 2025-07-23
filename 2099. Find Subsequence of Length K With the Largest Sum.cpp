class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        vector<int>ans;
        while(k!=0){
            ans.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        vector<int>res;
        for(auto x: ans){
            res.push_back(nums[x]);
        }
        return res;
    }
};
