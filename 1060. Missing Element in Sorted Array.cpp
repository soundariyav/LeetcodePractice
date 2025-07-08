class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int val = nums[i]-nums[0]-i;
            ans.push_back(val);
        }
        if(k>ans.back()){
            return nums.back()+ (k-ans.back());
        }
        auto it= lower_bound(ans.begin(),ans.end(),k);
        int ind = it - ans.begin(); 
        int itj = ind==0 ? 0 : ind-1;
        int rem = k- ans[itj];
       
        return nums[itj]+rem;
    }
};
