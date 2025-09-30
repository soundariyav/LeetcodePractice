class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        if(nums.size()<=2){
            return 0;
        }
        for(int i=0;i<=nums.size()-2;i++){
            int num1 = nums[i];
            for(int j=i+1;j<nums.size()-1;j++){
                int num2 = nums[j];
                int k = nums.size()-1;
                int sum = num1+num2;
                while(k>j){
                    if(sum>nums[k]){
                        count++;
                    }
                    k--;
                }
            }
        }
        return count;
    }
};
