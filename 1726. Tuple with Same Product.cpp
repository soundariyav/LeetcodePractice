class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int m = nums[i]* nums[j];
                mp[m].push_back({nums[i],nums[j]});
            }
        }
        int ans = 0;
        for(auto [k,v]: mp){
            if(v.size()>=2){
               int p = helper(v);
               ans+= p*8;
            }
        }
        return ans;
    }
    int helper(vector<pair<int,int>>v){
        set<int>s;
        int count=0;
        for(int i=0;i<v.size();i++){
            auto x = v[i];
            s.insert(x.first);
            s.insert(x.second);
            for(int j=i+1;j<v.size();j++){
                auto y = v[j];
                if(s.find(y.first)!=s.end() || s.find(y.second)!=s.end()){
                    continue;
                }
                else{
                    count++;
                }
            }
        }
        return count;
    }
};
