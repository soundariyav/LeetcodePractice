class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> res;
        priority_queue<int,vector<int>,greater<int>> pq;
        int t = nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
       // sort(nums.begin(),nums.end());
       while(t>0)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            res.push_back(b);
            res.push_back(a);
            t = t-2;
         }
         return res;


        
    }
};
