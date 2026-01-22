class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=1;i<1000;i++){
            int a = i | (i+1);
            if(mp.find(a)==mp.end()){
                mp[a] = i;
            }
            else{
                mp[a] = min(mp[a], i);
            }
            
        }
        vector<int>ans;
        for(auto x: nums){
            if(mp.find(x)!=mp.end()){
                ans.push_back(mp[x]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};


