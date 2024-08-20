class Solution {
public:
    bool canJump(vector<int>& nums) {
        int sl = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            sl--;
            if(sl < 0)
            {
                return false;
            }
            cout<< sl << endl;
            if(sl<=nums[i])
            {
                sl = nums[i];

            }
            if(i==nums.size()-1)
            {
                return true;
            }
            
        }
        return true;
        
    }
};
