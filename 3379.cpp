class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.end(),nums.begin(),nums.end());
        nums.insert(nums.end(),nums.begin(),nums.end());
        vector<int>res(n,0);
        int j=0;
        for(int i=n;i<2*n;i++){
            int v = nums[i];
            int ans = nums[i];

            if(nums[i]>0){
                v = nums[i];
                v= v%n;
                ans = nums[i+v];
                cout<<ans<<endl;

            }
            if(nums[i]<0){
                v = abs(nums[i]);
                v= v%n;
                ans = nums[i-v];
                cout<<ans<<endl;
            }
            res[j]= ans;
            j++;
        }
        return res;
    }
};
