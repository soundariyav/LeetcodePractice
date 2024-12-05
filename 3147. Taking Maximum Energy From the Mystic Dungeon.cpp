class Solution {
public:
    vector<int>energy;
    int n=0;
    int k=0;
    unordered_map<int,int>m;
    int maximumEnergy(vector<int>& e, int l) {
        energy=e;
        n= e.size();
        k=l;
        int ans=-1e9;
        for(int i=0;i<energy.size();i++)
        {
           ans= max(ans,foo(i));
        }
        return ans;
    }
    int foo(int i)
    {
        if(i>=n)
        {
            return m[i]=0;
        }
        if(m.find(i)!=m.end())
        {
            return m[i];
        }
        int sum=0;
        sum = energy[i] + foo(i+k);
        return m[i]=sum;
    }
};
