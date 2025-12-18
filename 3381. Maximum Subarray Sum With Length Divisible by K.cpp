class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long pf = 0;
        long long ms = LONG_LONG_MIN;
        vector<long long>ksum(k,LONG_LONG_MAX/2);
        ksum[k-1]=0;
        for(int i=0;i<nums.size();i++){
             pf += nums[i];
             ms = max(ms, pf - ksum[i%k]);
             ksum[i%k] = min(pf,ksum[i%k]); 
        }
        return ms;

    }
    
};


    
