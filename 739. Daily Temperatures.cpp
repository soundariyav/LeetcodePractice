class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>s;
        int n=t.size();
        vector<int>ans(n,0);
        for(int i=0;i<t.size();i++)
        {
            
            while((!s.empty())&& t[s.top()]<t[i])
            { 
                int val = s.top();
                s.pop();
                ans[val]= i-val;
            } 
            s.push(i);
             

            
        }
        return ans;
    }
};
