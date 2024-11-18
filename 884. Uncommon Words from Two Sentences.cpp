class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp;
        map<string,int>mp1;
        string res;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]== ' ')
            {
                cout<<res<<endl;
                mp[res]++;
                res = "";
            }
            else
            {
                res+=s1[i];
            }
        }
        cout<<res<<endl;
        mp[res]++;
        res = "";
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==' ')
            {
                cout<<res<<endl;
                mp1[res]++;
                res = "";
            }
            else
            {
                res+=s2[i];
            }
        }
        cout<<res<<endl;
        mp1[res]++;
        vector<string>ans;
        for(auto [k,x]:mp)
        {
            if(x==1)
            {
                if(mp1.find(k)==mp1.end())
                {
                    ans.push_back(k);
                }
            }
        }
        for(auto [k,x]:mp1)
        {
            if(x==1)
            {
                if(mp.find(k)==mp.end())
                {
                    ans.push_back(k);
                }
            }
        }

        return ans;
    }
};
