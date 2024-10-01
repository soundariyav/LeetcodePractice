class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int>mmap;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++)
        {
            mmap[nums[i]]++;
        }
        int maxe=0;
        for(const auto ch: mmap)
        {
            int a = ch.second;
            if(a<2)
            {
                maxe = max(maxe,ch.first);
            }
        }
        if(maxe==0)
        {
            return-1;
        }
        return maxe;

    }
};
