class Solution {
public:
    int mod = 1e9+7;
    int countGoodNumbers(long long n) {
        bool flag = true;
        long long no_of_odd = n/2;
        long long no_of_even = n-n/2;
        
        if(n==1){
            return 5;
        }
        long long ans = ((power(5LL,no_of_even)%mod * power(4LL,no_of_odd)%mod)%mod);
        return (int)ans;

    }
    long long power(long long a, long long b){
        long long res =1;
        a = a%mod;
        if(a==0){
            return 0;
        }
        while(b>0){
            if(b%2!=0){
                res = (res*a)%mod;
            }
            b = b/2;
            a = (a*a)%mod;
        }
        return res;
    }
};
