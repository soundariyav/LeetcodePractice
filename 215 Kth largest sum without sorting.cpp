class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>> pq;
        vector<int>res(k);
        for(int i=0;i<nums.size();i++)
        {
            
            if(pq.size()>=k)
            {
                if(pq.top()<nums[i])
                {
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
            else
            {
            pq.push(nums[i]);
            }
           
          
        }
        //cout<< pq.size() << "the size of priority queue is " << endl;
        
        int i =0;
        while(!pq.empty())
        {
            res[i] = pq.top();
            cout<< res[i] <<endl;
            pq.pop();
            i++;
        }
        reverse(res.begin(),res.end());
        return res[k-1];
        //return{};
        
    }
};
