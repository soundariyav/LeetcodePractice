class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int start =0;
        int n=nums.size()-1;
        int end=0;
        vector<int>k;
        vector<vector<int>>ans;
        vector<int>l;
        if(nums.empty())
        {
            ans.push_back({lower,upper});
            return ans;
        }
        if(lower<nums[0])
        {
            ans.push_back({lower,nums[0]-1});
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            
            if((nums[i+1]-nums[i])>1)
            {
               
                int f = nums[i]+1;
                int s = nums[i+1]-1;
                ans.push_back({f,s});
            }
           
        }
        if(upper>nums[n])
        {
            k.push_back(nums[n]+1);
            k.push_back(upper);
            ans.push_back({nums[n]+1,upper});
        }

        return ans;
        
    }
};
