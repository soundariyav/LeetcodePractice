class Solution {
public:
    long long coloredCells(int n) {
        long long c = 1;
        
        for(int i=2;i<=n;i++)
        {
           c=  4*(i-1) + c;
          // cout<<c<<endl;
        }
        return c;
       
    }
};
