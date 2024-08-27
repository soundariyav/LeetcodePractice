class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>res;
        priority_queue<int>pq;
        unordered_map<int,vector<int>>m;
        int count=0;
        for(int i = 0; i<nums.size();i++)
        {
            int num = nums[i];
            int sum = 0;
            while(num>0)
            {
                int b = num%10; 
                num = num/10;
                sum = sum + b;

            }
            m[sum].push_back(nums[i]);
            /*
            auto v = m[sum];
            v.push_back(i);
            m[sum] = v;
            */
            cout<<sum << endl;
            
        }
    int fi = -1;
    for(auto& [k, vec]: m){
        cout<<k<<"->";
        if(vec.size()>=2)
        {
        int n = vec.size()-1;
        sort(vec.begin(),vec.end());

        int sum = vec[n]+vec[n-1];
        fi = max(fi,sum);
        }
        
    }
    return fi;
