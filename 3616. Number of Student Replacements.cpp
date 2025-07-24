class Solution {
public:
    int totalReplacements(vector<int>& ranks) {
        int v= ranks[0];
        int ans=0;
        for(int i=1;i<ranks.size();i++){
            if(v>ranks[i]){
                v = ranks[i];
                ans++;
            }
        }
        return ans;
    }
};
