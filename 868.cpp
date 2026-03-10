class Solution {
public:
    int binaryGap(int n) {
        vector<int>x = helper(n);
        int ans=0;
        if(x.size()<=1)return 0;
        for(int i=x.size()-1;i>0;i--){
            cout<<x[i]<<endl;
            int d= x[i]-x[i-1];
            ans = max(d,ans);
        }
        return ans;
    }
    vector<int> helper(int n){
        vector<int> ans;
        int bit = 1;
        while(n!=0){
            int l = n%2;
            n= n/2;
            if(l==1){
                ans.push_back(bit);
            }
            bit++;
        }
        return ans;
    }
};
