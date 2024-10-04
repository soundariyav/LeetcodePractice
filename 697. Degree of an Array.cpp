class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int maxd=0;
        int minlen=0;
        unordered_map<int,int>degree;
        unordered_map<int,int>firsto;
        unordered_map<int,int>lasto;
        for(int i =0;i<nums.size();i++)
        {
            auto a = nums[i];
            degree[a]++;
            if(firsto.find(a)== firsto.end())
            {
                firsto[a]=i;
            }
            lasto[a]=i;
            if(degree[a]>maxd)
            {
                maxd= degree[a];
                minlen= lasto[a]-firsto[a]+1;
            }
            else if(degree[a]==maxd)
            {
                minlen =min(minlen,lasto[a]-firsto[a]+1);
            }
        }
        return minlen;
    }
};
