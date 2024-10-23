class Solution {
public:
    string convertToTitle(int num) {
        string ans;
        while(num!=0)
        {
            num--;
            char a = (num%26)+'A';
            ans = ans+a;
            num = num/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
