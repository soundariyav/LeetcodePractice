class Solution {
public:
    vector<int>prime;
    unordered_map<int,int>memo;
    int minNumberOfPrimes(int n, int m) {
        prime = firstMPrimes(m);
        
        int ans = dp(n);
        return ans==INT_MAX ? -1 : ans;
    }
    
    int dp(int amt){
        if(amt==0)return 0;
        if(amt<0)return INT_MAX;
        if(memo.find(amt)!=memo.end()){
            return memo[amt];
        }
        int mc = INT_MAX;
        for(auto x: prime){
            int res = dp(amt-x);
            if(res!=INT_MAX){
                mc = min(mc,res+1);
            }
        }
        memo[amt]=mc;
        return mc;
    }
    vector<int> firstMPrimes(int m) {
        vector<int> primes;
        int num = 2;
        while (primes.size() < m) {
            bool isPrime = true;
            for (int i = 2; i*i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) primes.push_back(num);
            num++;
        }
    return primes;
    }
};
