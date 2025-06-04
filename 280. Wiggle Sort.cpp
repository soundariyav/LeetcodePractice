class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>ans(n,0);
        int l = 0;
        int r = n-1;
        int i=0;
        bool flag = true;
        while(l<r){
            if(flag){
                ans[i]= nums[l];
                i++;
                l++;
                flag=false;
            }
            else{
                ans[i] = nums[r];
                r--;
                i++;
                flag = true;
            }
        }
        if(l==r){
            ans[i]= nums[l];
        }
        nums = ans;
    }
    
};
