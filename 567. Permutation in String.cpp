class Solution {
public: 
    unordered_map<char,int>m;
    unordered_map<char,int>wc;
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        if(n>s2.size())return false;
        for(auto x: s1)
        {
            m[x]++;
        }
        for(int i=0;i<n;i++)
        {
            wc[s2[i]]++;
        }
        if(wc==m)return true;
        for(int j=n;j<s2.size();j++)
        {
            auto l = j-n;
            wc[s2[j]]++;
            wc[s2[l]]--;
            if(wc[s2[l]]==0)
            {
                wc.erase(s2[l]);
            }
            if(wc==m)
            {
                return true;
            }
        }
        return false;
    }
};
