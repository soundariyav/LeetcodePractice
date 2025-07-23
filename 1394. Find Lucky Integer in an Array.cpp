class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(auto x: arr){
            mp[x]++;
        }
        int count=0;
        for(auto [k,v]:mp){
            if(k==v){
                count = max(count,k);
            }
        }

        return count==0 ? -1 : count;
    }
};
