class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int cursum=0;
        mp[0]=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            cursum+= nums[i];
            int n = cursum-goal;
            if(mp.find(n)!=mp.end()){
                count+= mp[n];
            }
            mp[cursum]++;
        }
        return count;
    }
};
