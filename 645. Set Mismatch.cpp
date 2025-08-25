class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
        vector<int>a(n+1,0);
        for(auto x: nums){
            a[x]+=1;
        }
        for(auto x: a){
            cout<<x<<" ";
        }
        int miss = 0;
        int dup = 0;
        for(int i=1;i<a.size();i++){
            if(a[i]==2){
                dup = i;
            }
            if(a[i]==0){
                miss = i;
            }
        }
        return {dup,miss};
    }
};
