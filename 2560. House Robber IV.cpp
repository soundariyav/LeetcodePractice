class Solution {
public:
    
    int minCapability(vector<int>& nums, int k) {
        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            unordered_map<int,int>memo;
            if(check(mid,nums,0,memo)>=k){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    int check(int&mid, vector<int>& nums,int i,unordered_map<int,int>& memo){
        if(memo.find(i)!=memo.end()){
            return memo[i];
        }
        if(i>=nums.size())return 0;
        
        int c1=0;
        int c2=0;
        if(nums[i]<=mid){
             c1 = 1+ check(mid,nums,i+2,memo);
        }
        c2 = check(mid,nums,i+1,memo); 
        return memo[i]=max(c1,c2);
    }
};
