class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mn = 1e9;
        int ma= -1e9;
        for(auto x: nums){
            mn = min(mn,x);
            ma = max(ma,x);
        }
        return (long long)(ma-mn)*k;
    }
};
