class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        
        int high = 1e9;
        while(low<high){
            int mid = low+(high-low)/2;
            int ans = check(mid,nums);
            if(ans<=threshold){
                high = mid;
            }
            if(ans>threshold){
                low = mid+1;
            }
        }
        return low;
    }
    int check(int d,vector<int>&nums){
        int sum =0;
        for(auto x: nums){
             int v = ceil(double(x)/d);
             sum+= v;
        }
        return sum;
    }

};
