class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        int prev = -1;
        for(auto [k,v]: mp){
            if(prev ==-1){
                prev = v;
            }
            else if(prev!=v){
                return false;
            }
        }
        return true;
    }
};
