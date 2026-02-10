class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        for(auto x: answers){
            mp[x]++;
        }
        int count=0;
        for(auto [k,v]:mp){
            count+= ceil((double)v / (k+1)) *  (k+1);
        }
        return count;
    }
};
