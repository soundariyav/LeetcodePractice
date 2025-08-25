class Solution {
public:
    int mm;
    int minimumSize(vector<int>& nums, int maxOperations) {
       int low =1;
       mm = maxOperations;
       int high= *max_element(nums.begin(),nums.end());
       int ans = 1e9;
       while(low<=high){
            int mid = low +(high-low)/2;
            cout<<mid<<endl;
            if(helper(mid,nums)){
                ans = min(ans,mid);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
       }
       return ans;
    }
    bool helper(int mid,vector<int>nums){
        long long count =0;
        for(auto x: nums){
            if(x>mid){
               int v = x/mid;
               if(x%mid==0){
                    v-= 1;
               }
               count+=v;
            }
        }
        return count<=mm;
    }
};
