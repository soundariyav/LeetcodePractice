class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(mid%2==0){
                //check
                if(nums[mid]==nums[mid+1]){
                    //one element is on right
                    low = mid+1;
                }
                else{
                    high = mid;
                }
            }
            if(mid%2!=0){
                if(nums[mid]==nums[mid-1]){
                    low = mid+1;

                }
                else{
                    high = mid;
                }
            }
        }
        return nums[low];
    }
};
