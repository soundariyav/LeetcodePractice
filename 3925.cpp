class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>r = nums;
        reverse(r.begin(),r.end());
        nums.insert(nums.end(),r.begin(),r.end());
        return nums;
    }
};
