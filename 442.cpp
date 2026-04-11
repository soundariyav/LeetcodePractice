class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n+1,0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]= arr[nums[i]]+1;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
