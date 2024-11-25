class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        multiset<int>s;
        for(auto x: nums)
        {
            s.insert(x);
        }
        int op=0;
        for(int i=0;i< nums.size();i++)
        {
            int t = k-nums[i];
            if(s.find(t)!=s.end()) s.erase(s.find(t));
            else continue;
            cout<<t<<endl;
            cout<<nums[i]<<endl;
            if(s.find(nums[i])!=s.end())
            {
               // s.erase(t);
                s.erase(s.find(nums[i]));
                op++;
            }
            else
            {
                s.insert(t);
            }
        }
        return op;
    }
};
