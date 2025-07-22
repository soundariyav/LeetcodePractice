class Solution {
public:
    bool hasAlternatingBits(int n) {
        string ans;
        if(n==0){
            return false;
        }
        while(n>0){
            int r = n%2;
            n = n/2;
            ans += to_string(r);

        }
        reverse(ans.begin(),ans.end());
        char prev = ans[0];
        for(int i=1;i<ans.size();i++){
            if(prev== ans[i]){
                return false;
            }
            prev = ans[i];
        }
        return true;
    }

};
