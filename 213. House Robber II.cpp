class Solution {
public:
    //1 2 3
    //2 3 1
    int rob(vector<int>& nums) {
        //nums.push_back(nums[0]);
        int n=nums.size();
        vector<int>dp(n+1);
        if(n<2)
        {
            return nums[n-1];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        cout<<"hi"<<endl;
        dp[0]=nums[0];
        // 1 2 3
        dp[1] = max(nums[1],nums[0]);
        for(int i=2;i<nums.size()-1;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
            cout<<dp[i]<< " ";
        }
        cout<<endl;
        cout<<"dsecon"<<endl;
       // 0 2 2 3  

        vector<int>dp1(n+1);
        dp1[0]=0;
        dp1[1]= nums[1];
        dp1[2]=max(nums[2],nums[1]);
        for(int i=3;i<nums.size();i++)
        {
            
            dp1[i] = max(dp1[i-1],dp1[i-2]+nums[i]);
            cout<<dp1[i]<< " ";
        }
        cout<<endl;
        int ans = max(dp[n-2],dp1[n-1]);
        //cout<<ans<<endl;
        return ans;


    }
    
     
    
};
