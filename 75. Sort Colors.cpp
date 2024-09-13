class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int i = 0;
        while(!pq.empty())
        {
            int a = pq.top();
            pq.pop();
            nums[i]=a;
            i++;

        }
        
    }
};
