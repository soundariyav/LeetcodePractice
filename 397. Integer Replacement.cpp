class Solution {
public:
    int integerReplacement(int n) {
        return dp(n);
    }
    int dp(long long n)
    {
        if(n==1)
        {
            return 0;

        }
        int cost=1e9;
        if(n%2==0)
        {
            
            cost = min(cost,1 + dp(n/2));
        }
        if(n%2!=0)
        {
            cost = min(cost,1+ dp(n+1));
            cost = min(cost, 1+ dp(n-1));
        }
        return cost;
    }
};
