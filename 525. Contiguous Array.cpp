class Solution {
public:
    unordered_map<int,int>mp;
    int findMaxLength(vector<int>& nums) {
        int count = 0;
        int ans=0;
        mp[0]= -1;
        for(int i=0;i<nums.size();i++){
            count+= nums[i]==1 ? 1 : -1;
            if(mp.find(count)!=mp.end()){
                int l = i-mp[count];
                ans = max(ans,l);
            }
            else{
                mp[count]=i;
            }
        }
        return ans;
    }
        
        
};
