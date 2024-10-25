class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int longest = 0;
        for(auto num: nums)
        {
            if(!s.count(num-1))
            {
                int cn = num;
                int cs = 1;
                while(s.count(cn+1))
                {
                    cn = cn+1;
                    cs++;
                }
                longest = max(longest, cs);
            }
        }
        return longest;

        
    }
};
