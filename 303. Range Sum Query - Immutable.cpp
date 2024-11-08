class NumArray {
public:
    vector<int>ps;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        ps=vector<int>(n);
        int pf = 0;
        for(int i=0;i<nums.size();i++)
        {
           pf = pf + nums[i];
           ps[i] = pf;
            cout<<ps[i] << " ";
        }
        cout<<endl;
    }
    
    int sumRange(int left, int right) {
        if(left==0)return ps[right];
        int ans = ps[right]-ps[left-1];
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
