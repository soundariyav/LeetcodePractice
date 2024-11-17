class Solution {
public:
    int ans=-1;
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //0 3 6 7 7 
        int l =1;
        int h = n;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            int d =foo(nums,mid);
            if(d>mid)
            {
                l=mid+1;
            }
            else if(d==mid)
            {
                return ans;

            }
            else
            {
                h= mid-1;
            }
            
        }
        return ans;

    }
    int foo(vector<int>&nums, int a)
    {
        int count=0;
        for(auto x: nums)
        {
            if(x>=a)
            {
                count++;
            }
        }
        if(count==a)
        {
            ans = count;   
            
        }
        return count;
    }
};
