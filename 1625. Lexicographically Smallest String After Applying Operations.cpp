class Solution {
public:
    string ans;
    unordered_set<string>v;
    string findLexSmallestString(string s, int a, int b) {
        ans = s;
        dfs(a,b,s,v);
        return ans;
    }
    string add(int a,string s)
    {
        for(int i=1;i<s.size();i=i+2)
        {
           int curr= (s[i] - '0' + a) % 10;
           s[i] = curr + '0';

        }
        return s;

    }
    string round(int b,string s)
    {
        int n=s.size();
        string s1 = s.substr(n-b,b);
        string s2 = s.substr(0,n-b);
      //  ans = s1+s2;
        return s1+s2;
    }
    void dfs(int a,int b,string s,unordered_set<string>&v)
    {
        if(v.find(s)!=v.end())
        {
            return ;
        }
        v.insert(s);
        ans = min(ans,s);
        dfs(a,b,add(a,s),v);
        dfs(a,b,round(b,s),v);
        
    }
 
};
