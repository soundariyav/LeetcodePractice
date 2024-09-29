class Solution {
public:
    int mySqrt(int x) {
        //find sqrt of a number using binary search;
        //find left right and pivot
        if(x<2)
        {
            return x;
        }
        int l =2;
        int r = x/2;
        int m =0;
        while(l<=r)
        {
            m = l+(r-l)/2;
           // int num = m* m;
            if(m>x/m)
            {
                r = m-1;
            }
            else if(m==x/m)
            {
               return m;
            }
            else
            {
                 l=m+1;
            }
        }
        return r;
        
    }
};
