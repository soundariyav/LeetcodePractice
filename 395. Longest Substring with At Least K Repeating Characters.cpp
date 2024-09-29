class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        unordered_map<char,int>st;
        //find all unique characters and their frequency
        for(int i=0;i<s.size();i++)
        {
            st[s[i]]++;
        }
        int l=0;
        while(l<n && st[s[l]]>=k)
        {
            l++;
        }
        if(l>=n-1)
        {
            return l;
        }
        int ls1 = longestSubstring(s.substr(0,l),k);
        while(l<n && st[s[l]]<k)
        {
            l++;
        }
        int ls2 = longestSubstring(s.substr(l),k);
        return max(ls1,ls2);
        
        
    }
};
