class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>p;
        for(auto x:nums){
            if(x<0){
                p.insert(x);
            }
        }
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                int x = -nums[i];
                if(p.find(x)!=p.end()){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};
