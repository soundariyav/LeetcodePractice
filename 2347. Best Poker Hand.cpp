class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char,int>mp;
        map<int,int>r;
        for(auto x: suits){
            mp[x]++;
            
        }
        for(int i=0;i<suits.size();i++){
            r[ranks[i]]++;
        }
        for(auto [k,v]: mp){
            if(v==5){
                return "Flush";
            }
            
        }
        int ans=0;
        for(auto [k,v]:r){
            ans = max(v,ans);
            
        }
        if(ans>=3){
            return "Three of a Kind";
        }
        if(ans==2){
            return "Pair";
        }
        return "High Card";
        
    }
};
