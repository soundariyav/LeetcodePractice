class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {
        map<int,set<int>>mp;
        for(auto x: students){
            mp[x[1]].insert(x[0]);
        }
        int s=0;
        for(auto [k,v]: mp){
            if(s<v.size()){
                s = v.size();
            }
        }
        return s;
    }
};
