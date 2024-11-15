class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto x: s)
        {
            mp[x]++;

        }  
        int res=0;
        bool on=false;  
        for(auto [k,v]:mp)
        {
            if(v%2==0)
            {
                res+=v;
            }
            else
            {
                res+= v-1;
                on = true;
            }
        }
        if(on==true)
        {
            res++;
        }
        return res;
    }
};
