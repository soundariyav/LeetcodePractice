class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int mask = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                mask = mask & nums[i]; 
            }
        }
        return mask == -1?  0 : mask;
    }
};
