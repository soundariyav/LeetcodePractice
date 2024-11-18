class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>numsd;
        numsd = nums;
        if(nums.size()<=2)return true;
        sort(numsd.begin(),numsd.end());
        if(numsd==nums)return true;
        //int prev = numsd[0];
        //bool flag = true;
        //int i=0;
        vector<int>num;
        num= nums;
        num.insert(num.end(),nums.begin(),nums.end());

        auto it = search(num.begin(),num.end(),numsd.begin(),numsd.end());
        return it!=num.end();
               
    }
};
