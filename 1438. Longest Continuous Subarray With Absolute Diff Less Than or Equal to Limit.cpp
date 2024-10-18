class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<pair<int,int>>pq;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        int left=0, i=0;
        int maxl=0;
        for(i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
            p.push({nums[i],i});
            while(pq.top().first-p.top().first>limit)
            {
                left = min(pq.top().second,p.top().second)+1;
            
            while(pq.top().second<left)
            {
                pq.pop();
            }
            while(p.top().second<left)
            {
                p.pop();
            }
            }
            maxl = max(maxl,i-left+1);
        }
        
        return maxl;
    }
};
