class Solution {
public:
    map<int,int>m;
    map<int,int>c;
    int deleteAndEarn(vector<int>& nums) {
        auto maxn = *max_element(nums.begin(),nums.end());
        for(auto num: nums)
        {
            m[num]++;
        }

        return maxP(maxn);

    }
    int maxP(int num)
    {
        //base case
        if(num==0)return 0;
        if(num==1) return m[1];
        if(c.find(num)!=c.end())return c[num];
        int gain = num * m[num];
        c[num] = max(maxP(num-2)+gain, maxP(num-1));
        return c[num];
    }
};
