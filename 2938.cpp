class Solution {
public:
    long long minimumSteps(string s) {
        //110011
        int n = s.size();
        long long ans=0;
        vector<int>p(n+1,0);
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                p[i] = 1+ p[i+1];
            }
            else{
                p[i] = p[i+1];
            }
        }
        for(auto x: p){
            cout<<x<<" ";
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans+= p[i];
            }
        }
        return ans;
    }
};
