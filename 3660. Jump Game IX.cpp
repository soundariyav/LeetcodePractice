class Solution {
public:
    vector<int>nums;
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        this->nums = nums;
        vector<int>sm(n);
        //dp = vector<int>(n,0);
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                sm[i]=nums[i];
            }
            else{
                if(sm[i+1]<nums[i]){
                    sm[i]= sm[i+1];
                }
                else{
                    sm[i]= nums[i];
                }
            }
        }
        vector<int>pm(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                pm[i]=nums[i];
            }
            else{
                if(pm[i-1]>nums[i]){
                    pm[i]=pm[i-1];
                }
                else{
                    pm[i]=nums[i];
                }
            }
        }
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                ans[i]= pm[i];
            }
            else if(pm[i]>sm[i+1]){
                ans[i]= ans[i+1];
            }
            else{
                ans[i]= pm[i];
            }
        }
        return ans;
    }
};
