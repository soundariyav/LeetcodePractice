class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int i =0;
        const unsigned int M = 1000000007;
        //int j =0;
        int count=0;
        vector<int> res;
        for(i;i<nums.size();i++)
        {
            count = nums[i];
            res.push_back(count);
            int j =i+1;
            while(j<nums.size())
            {
                count = count + nums[j];
               // cout<<count<<endl;
                res.push_back(count);
                j++;
            }
            //cout<< count << endl;
        }
        sort(res.begin(),res.end());
       
        int sum =0;
        
        i = left -1;
        int j =right - 1;
        for(i; i<=j;i++)
        {
            sum = (sum + res[i])%M;
        }
        
        
        return sum;
        
    }
};
