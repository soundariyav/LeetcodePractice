class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int j= n-1;
        int k = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[k]= nums[i];
                k++;
            }
            else{
                ans[j]=nums[i];
                j--;
            }
        }
        return ans;
    }
};
