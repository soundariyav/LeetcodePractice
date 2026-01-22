class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count= 0;
        while(!check(nums)){
            nums = change(nums);
            count++;
        }
        return count;
    }
    bool check(vector<int>nums){
        vector<int>n = nums;
        sort(n.begin(),n.end());
        if(n==nums){
            return true;
        }
        return false;
    }
    vector<int> change(vector<int>nums){
        int j = 0;
        int k = 0;
        int gs= 1e9;
        for(int i=0;i<nums.size()-1;i++){
             int sum = nums[i]+ nums[i+1];
             if(gs>sum){
                j = i;
                k = i+1;
                gs = sum;
            }
        }
        vector<int>n;
        for(int i=0;i<nums.size();i++){
            if(i==j){
                cout<< gs<< " ";
                n.push_back(gs);
                continue;
            }
            if(i==k){
                continue;
            }
            else{
                cout<< nums[i]<< " ";
                n.push_back(nums[i]);
            }
        }
        cout<<endl;
        return n;
    }
};
