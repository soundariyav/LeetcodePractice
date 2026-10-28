class Solution {
public:
    int mirrorDistance(int n) {
        int rn = 0;
        int m = n;
        while(m!=0){
            int a = m%10;
            rn = rn*10+ a;
            m = m/10;
        }
        return abs(n-rn);

    }
};
