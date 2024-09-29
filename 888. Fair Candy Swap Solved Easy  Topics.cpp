class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        int asum = accumulate(a.begin(),a.end(),0);
        int bsum = accumulate(b.begin(),b.end(),0);
        unordered_map<int,int>mymap;
        int d = bsum-asum;
        int z = d/2;
        for(int i =0;i<b.size();i++)
        {
            mymap[b[i]]++;
        }
        for(int i=0;i<a.size();i++)
        {
            int x = a[i];
            int y = x+z;
            if(mymap.find(y)!=mymap.end())
            {
                return {x,y};
            }
        }
        return{};

    }
};
