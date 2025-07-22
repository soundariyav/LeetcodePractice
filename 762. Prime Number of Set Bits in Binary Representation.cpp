class Solution {
public:
    set<int>st;
    int countPrimeSetBits(int left, int right) {
        prime(right);
        int count=0;
        for(int i=left;i<=right;i++){
            if(helper(i)){
                count++;
            }
        }
        return count;
    }
    bool helper(int n){
        if(n<=0)return false;
        int count=0;
        while(n!=0){
            int v = n&1;
            count+=v;
            n=n>>1;
        }
        if(st.find(count)!=st.end())return true;
        return false;
    }
    void prime(int n){
        for(int j=2;j<=32;j++){
            bool flag = true;
            for(int i=2;i<=sqrt(j);i++){
                if (j % i == 0) { // If divisible, it's not prime
                    flag = false;
                }
            }
            if(flag){
                st.insert(j);
            }
        }
    }

};
