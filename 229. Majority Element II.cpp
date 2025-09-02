class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0;
        int count1=0;
        int c2=0;
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!= c2){
                count1 = 1;
                c1 = nums[i];
            }
            else if(count2==0 && nums[i]!= c1){
                count2 = 1;
                c2 = nums[i];
            }
            else if(c1==nums[i]){
                count1++;
            }
            else if(c2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(auto x: nums){
            if(c1==x){
                count1++;
            }
            else if(c2==x){
                count2++;
            }
        }
        int t = nums.size()/3;
        vector<int>ans;
        if(count1>t){
            ans.push_back(c1);
        }
        if(count2>t){
            ans.push_back(c2);
        }
        return ans;

    }
};
