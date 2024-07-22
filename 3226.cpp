class Solution {
public:
    int minChanges(int n, int k) {
        bitset<32> bn(n);
        bitset<32> bk(k);
        cout<< bn <<" " << bk<< endl;
        int res=0;
        for(int i=0;i<32;i++)
        {
            if(bn[i] == bk[i])
            {
                continue;
            }
            if(bk[i]==1)
            {
                return -1;
            }
            else
            {
                res++;
            }

        }
        return res;
    }
    
};
