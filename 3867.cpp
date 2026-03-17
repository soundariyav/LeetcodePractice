class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        // each index should have the next / itself largest number
        vector<int>ps;
        int prev = 0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                ps.push_back(nums[i]);
                prev = nums[i];
            }
            else{
                prev = max(prev,nums[i]);
                ps.push_back(prev);
            }
        }
        vector<int>arr;
        //reverse(ps.begin(),ps.end());
        for(int i=0;i<nums.size();i++){
             long long cv = gcd(nums[i], ps[i]);
             arr.push_back(cv);
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j= arr.size()-1;
        long long ans = 0;
        while(i<j){
            long long cv = gcd(arr[i], arr[j]);
            ans+= cv;
            i++;
            j--;
        }
        return ans;


    }
    
    long long gcd (int x, int y){
        if(x==y){
            return x;
        }
        while(x>0 && y>0){
            if(x>y){
                x = x%y;
            }
            else{
                y = y%x;
            }
            
        }
        if(x==0){
            return y;
        }
        return x;
    }
};
