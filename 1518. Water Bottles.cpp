class Solution {
public:
    int numWaterBottles(int n, int ne) {
        int ans = 0;
        while(n>=ne)
        {
        
            n=n-ne;
            if(n>=0) ans = ans+ ne;
            n=n+1;
           
            //cout<< n <<endl;

        }
        ans = ans+n;
         cout << ans << endl;
        return ans;
    }
};
