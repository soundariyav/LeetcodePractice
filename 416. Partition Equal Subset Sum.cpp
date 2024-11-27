class Solution {
public:
    int n;
    vector<int>num;
    vector<int>s1;
    vector<int>s2;
    int sum=0;
    int total=0;
    unordered_map<int,unordered_map<int,bool>>m;
    bool canPartition(vector<int>& nums) {
        n=nums.size();
        num = nums;
        total = accumulate(nums.begin(),nums.end(),0);
        if(total%2!=0)return false;
        return dp(0,0);
    }
    bool dp(int i, int sum)
    {
        if(sum>(total-sum))
        {
            return m[i][sum]=false;
        }
        if(i==num.size())
        {
            if(total-sum == sum)
            {
                return m[i][sum]=true;
            }
            else
            {
                return m[i][sum]=false;
            }
            
        }
        if(m.find(i)!=m.end()&& m[i].find(sum)!=m[i].end())
        {
            return m[i][sum];   
        }
        bool flag= false;
        bool ans = dp(i+1,sum+num[i]);
        if(ans)return m[i][sum]=true;
        bool ans2 = dp(i+1,sum);
        flag= ans || ans2;
        return m[i][sum]=flag;

    }
};
