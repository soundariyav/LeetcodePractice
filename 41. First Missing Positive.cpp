class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==1)return 2;
        for(auto& x: nums){
            if(x<0){
                x = 0;
            }
        }
        for(auto x: nums){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int v = nums[i];
                if(v>0){   
                    v = v-1;
                    if(v>=0 && v<nums.size() && nums[v]>=0){ 
                        int val = nums[v];
                        nums[v] = val*-1;
                        if(nums[v]==0)nums[v]= -10;
                    }
                }
                if(v<0){
                    v = abs(v)-1;
                    if(v>=0 && v<nums.size() && nums[v]>=0){
                        int val = nums[abs(v)];
                        nums[abs(v)]= val*-1;
                        if(nums[v]==0)nums[v]= -10;

                    }
                }
            }
        }
        for(auto x:nums){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                return i+1;
            }
        }
        return nums.size()+1;
        //return{};
    }
};
