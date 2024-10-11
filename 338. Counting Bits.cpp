class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            ans.push_back(binaRy(i));
        }
        return ans;
    }
    int binaRy(int n)
    {
        vector<int>t;
        while(n>0)
        {
            int d=n%2;
            t.push_back(d);
            n=n/2;
        }
        int sum = accumulate(t.begin(),t.end(),0);
        return sum;
    }
};
