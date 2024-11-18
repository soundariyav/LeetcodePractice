class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // sort(nums.begin(),nums.end())
        int n = nums.size();
        vector<int>ans(n+1,0);
        for(auto x: nums)
        {
            cout<<x<<endl;
            ans[x]++;
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==0)
            {
                return i;
            }
        }
        return {};
    }
};
