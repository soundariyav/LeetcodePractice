class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int total = nums.size();
        int count = 1e9;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            // considering this as min
            long long time = nums[i]* (long long)k;
            auto ind = upper_bound(nums.begin(),nums.end(),time);
            if(ind!=nums.end()){
                int n1 = nums.end() - ind;
                int n2 = i;
                int lc = n1+n2;
                count = min(lc,count);
            }
            else{
                int lc = i;
                count = min(lc,count);
            }
        }
        return count==1e9? 0:count;
    }
};
