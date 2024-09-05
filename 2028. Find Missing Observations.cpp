class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int summ = accumulate(rolls.begin(),rolls.end(),0);
        int m =rolls.size();
        int req = ((mean*(n+m))-summ);
        if((req<0)|| (req>n*6)) {
            return {};
        }
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int others=n-1-i;
            int a = req - others;
            if(a<=0) return {};
            int val = min(6,a);
            req = req-val;
            res.push_back(val);
        }
        return res;
    }

};
