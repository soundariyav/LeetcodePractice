class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int>pf;
        vector<int>sf;
        int prev=0;
        for(int i=0;i<nums.size();i++){
            prev+= nums[i];
            pf.push_back(prev);
        }
        prev=0;
        for(int i=nums.size()-1;i>=0;i--){
            prev+= nums[i];
            sf.push_back(prev);
        }
        reverse(sf.begin(),sf.end());
        int count=0;
        for(int i=0;i<pf.size()-1;i++){
            if(pf[i]%2==0){
                if(sf[i+1]%2==0){
                    count++;
                }
            }
            if(pf[i]%2!=0){
                if(sf[i+1]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};


