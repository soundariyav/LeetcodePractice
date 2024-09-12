class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        //Solution 01:
        int n= nums.size();
        int sum=0, count=0, i=0, j=0;
          if (n < 2) return false;
        
        // To handle k = 0 case separately
        if (k == 0) {
            for (int i = 0; i < n - 1; ++i) {
                if (nums[i] == 0 && nums[i + 1] == 0) {
                    return true;
                }
            }
            return false;
        }
        
        unordered_map<int, int>s;
        s[0]=-1;
        
        for(i=0; i<n; i++){
            sum += nums[i];
            int rem = sum%k;
            if(rem<0)
            {
                rem = rem+k;
            }
            if(s.find(rem)!=s.end())
            {
                if(i-s[rem]>1)
                {
                return true;//doesn't work with count++ {[0,0,0,0,
                }
            }
            else
            {
                s[rem]=i;
            }
        } 
        
        return false;
    }
};
