class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int c=0;
        for(int i=2;i<nums.size();i++){
            //int r = j-3;
            //cout<<i<<endl;
            if(nums[i-2]==0){
                //cout<<"yes"<<endl;
                c++;
                nums[i-2]^=1;
                nums[i-1]^=1;
                nums[i]^=1;
               
            }
        }
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum==nums.size())return c;
        return -1;
    }
};

