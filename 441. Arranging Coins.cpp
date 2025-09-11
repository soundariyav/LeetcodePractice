class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 0;
        long long high = n;
        while(low<=high){
            long long mid = low+(high-low)/2;
            long long curr = mid*(mid+1)/2;
            if(curr==n)return (int)mid;
            if(curr>n){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return (int)high;
        
    }
};
