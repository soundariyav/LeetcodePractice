class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]++;
        }
        int si=nums.size();
        for(const auto ch: s)
        {
            if(ch.second>si/2)
            {
                return ch.first;
            }
        }
        return{};
    }
};
