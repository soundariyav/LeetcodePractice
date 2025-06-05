class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {

        int ans=0;
        for(auto x: shift){
            if(x[0]==0){
                ans = ans-x[1];
            }
            else{
                ans = ans+x[1];
            }
        }
        cout<<ans<<endl;
        //if(ans==0)return s;
        int n = s.size();
        string an(n,'a');
        ans = ((ans % n) + n) % n;
        for(int i=0;i<n;i++){
            int sum = i+ans;
            if(sum>=n){
                sum = sum%n;
            }
            an[sum]=s[i];
        }
        return an;

    }
};
