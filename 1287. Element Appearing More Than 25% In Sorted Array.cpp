class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int time = 0.25* n;
        cout<<time<<endl;
        map<int,int>mp;
        for(auto x: arr){
            mp[x]++;
        }
        for(auto [k,v]:mp){
            if(v>time){
                return k;
            }
        }
        return{};
    }
};
