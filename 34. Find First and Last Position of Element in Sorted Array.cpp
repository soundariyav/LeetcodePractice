class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = fo(nums,target);
        ans[1]= so(nums,target);
        return ans;
        
    }
    int fo(vector<int>& nums,int target)
    {
        int left = 0;
        int first = -1;
        int right = nums.size()-1;
        while(left<=right)
        {
            
            int mid = left+(right-left)/2;
            //cout<<mid <<endl;
            if(nums[mid]==target)
            {
                first = mid;
                right=mid-1;
                  // left++;
            }
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return first;
    }
    int so(vector<int>& nums,int target)
    {
        int left = 0;
        int right = nums.size()-1;
         int second = -1;
        while(left<=right)
        {
           
            int mid = left+(right-left)/2;
            //cout<<mid <<endl;
            if(nums[mid]==target)
            {
                second = mid;
                left=mid+1;
                  // left++;
            }
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }

        }
        return second;
    }
};
