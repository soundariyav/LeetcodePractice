class Solution {
public:
    int findLHS(vector<int>& nums) {
       map<int,int>mp;
       int ans = 0;
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
       } 
       for(auto x: nums){
            if(mp.find(x+1)!=mp.end()){
                int sum = mp[x+1] + mp[x];
                ans = max(ans,sum);
            }
       }
       return ans;
    }
};
