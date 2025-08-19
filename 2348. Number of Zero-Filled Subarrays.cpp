class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count=0;
        int prev=-1;
        for(auto x: nums){
            if(x==0 && prev!=0){
                count++;
                prev = 0;
            }
            else if(x!=0){
                prev = x;
            }
        }
        return count;
    }
};
