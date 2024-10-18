class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int r = n-1;
        vector<int>result(n);
        for(int i = n-1;i>=0;i--)
        {
            int s;
            if(abs(nums[left])<abs(nums[r]))
            {
                s = nums[r];
                r--;
            }
            else
            {
                s = nums[left];
                left++;
            }
            result[i]=s*s;
        }
        return result;
    }
};
