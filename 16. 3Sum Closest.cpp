class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        //-4 -1 1 2 

        int diff = 1e9;
        for(int i=0;i<nums.size() && diff!=0;i++)
        {
            // -4 
            int l = i+1;
            int r = nums.size()-1;
            while(l<r)
            {
               // cout<< nums[i] << " " << nums[l] << " " << nums[r]<<endl; 
                int sum = nums[i]+nums[l]+nums[r];
                //cout<<sum <<endl;
                if(abs(sum-target)<abs(diff))
                {
                    diff= target-sum;
                    //cout<<diff<<endl;
                }
                if(sum<target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                
            }
        }
        return target-diff;
        
    }
};
