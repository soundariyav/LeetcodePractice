class Solution {
public:
    map<char,int>m;
    map<char,int>wc;
    string dp;
    vector<int> findAnagrams(string s, string p) {
        int n = p.size();
       // sort(p.begin(),p.end());
       // dp=p;
        vector<int>ans;
        for(auto x:p)
        {
            m[x]++;
        }
      // string w;
        for(int i=0;i<n;i++)
        {
           wc[s[i]]++;

        }
        if(wc==m)ans.push_back(0);
       
        for(int j=n;j<s.size();j++)
        {
            auto l = j-n;
            //cout<< l <<endl;
           wc[s[j]]++;
           wc[s[l]]--;
           if(wc[s[l]]==0)
           {
            wc.erase(s[l]);
           }
           if(wc==m)
           {
            ans.push_back(l+1);
           }

        }
        return ans;
        
    }
   
};
