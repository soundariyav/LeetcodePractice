class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int localsum=0;
        int maxsum = -1e9;
        for(int i=0;i<nums.size();i++)
        {
             localsum = localsum+nums[i];
             if(localsum>maxsum)
             {
                maxsum = localsum;
             }
             if(localsum<0)
             {
                localsum=0;
             }
        }
        return maxsum;
    }
};
