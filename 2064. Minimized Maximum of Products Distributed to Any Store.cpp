class Solution {
public:
    //long long sum=0;
    int minimizedMaximum(int n, vector<int>& quantities) {
        long long me = *max_element(quantities.begin(),quantities.end());
         //sum = accumulate(quantities.begin(),quantities.end(),0);
         if(n==1)return quantities[0];
        int low = 1;
        int high = me;
        int ans =1e9;
        while(low<=high){
            int mid = (low+high)/2;
            if(helper(double(mid),quantities,n)){
                high = mid-1;
                ans = min(ans,mid);
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    bool helper(double x,vector<int>q,int n){
        long long count=0;
        for(auto v: q){
            double r = ceil(v/x);
            int value = int(r);
            count+= value;
        }
        return count<=n;
    }

};
