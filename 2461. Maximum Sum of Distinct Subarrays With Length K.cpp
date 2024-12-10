class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        long long sum=0;
        for(int i=0;i<k;i++){
            m[nums[i]]++; 
            sum+= nums[i];  
        }
        long long res= 0;
        if(m.size()==k){
            cout<<"h"<<endl;
           res = max(res,sum);
        }
        //1,1:  5 1 : 4 1
        for(int i=k;i<nums.size();i++){
            int j = i-k; //0
            m[nums[i]]++; // //1,1:  5 1 : 4 1 : 2 1
            m[nums[j]]--;
            if(m[nums[j]]==0)m.erase(nums[j]); // 5 1 : 4 1 : 2 1
            sum = sum - nums[j];
            sum = sum + nums[i];
            if(m.size()==k){
                res = max(res,sum);
            }

        }

            
        return res;
        
    }
};
