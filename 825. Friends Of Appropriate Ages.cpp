class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        unordered_map<int,int>mp;
        for(auto x: ages){
            mp[x]++;
        }
         int count=0;
        vector<int>p(121,0);
        for(int i=1;i<=120;i++){
            p[i]= p[i-1] + mp[i];
        }
        for(int i=15;i<=120;i++){
            int minage = i/2+7;
            int t = p[i]-p[minage];
            count+= mp[i]*(t-1);
        }
        return count;
    }
   
};a
