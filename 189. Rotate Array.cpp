class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>nums.size())
        {
            k = k-nums.size();
        }
        int pos = nums.size();
        vector<int>d;
        pos = pos-k;
        for(int i=pos;i<nums.size();i++)
        {
            d.push_back(nums[i]);
        }
        for(int i=0;i<pos;i++)
        {
            d.push_back(nums[i]);
        }

        nums = d;
        return;
        
    }
};
