class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>s;
        int ans=0;
        for(int i=0;i<prices.size();i++)
        {
            if(s.empty())
            {
                s.push(prices[i]);
            }
            else
            {
                int p = prices[i];
                if(s.top()<p)
                {
                    int a=s.top();
                    int profit = p-a;
                    ans = ans+profit;
                    s.pop();
                    s.push(p);
                }
                else
                {
                    s.pop();
                    s.push(p);
                }
            }
        }
        return ans;
    }
};
