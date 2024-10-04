class Solution {
public:
    string breakPalindrome(string s) {
        if(s.size()<2)
        {
            return "";
        }
        int l = s.size();
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(i==l/2)
            {
                break;
            }
            if(s[i]!='a')
            {
                s[i]='a';
                return s;
            }
        }
        s[s.size()-1]='b';
        return s;
    }
   
};
