class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st{nums.begin(),nums.end()};
        priority_queue<int>pq(st.begin(),st.end());
        int k=3;
        int ans=0;
        int fm=0;
        bool flag=true;
        if(pq.size()<3){
            return pq.top();
        }
        while(!pq.empty() && k!=0){
            
            ans = pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};
