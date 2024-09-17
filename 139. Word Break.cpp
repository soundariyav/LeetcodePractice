class Solution {
public:
    unordered_set<string>dict;
   vector<int>c;
    bool wordBreak(string s, vector<string>& wordDict) {
        dict = unordered_set<string>(wordDict.begin(), wordDict.end());
        c=vector<int>(s.size()+1,-1);
        return breaker(0,s);
    }
    int breaker(int i, string word)
    {
        if(c[i]!=-1)
        {
            return c[i];
        }
        if(i>=word.size())
        {
            return 1;
        }
        bool res =0;
        for(int j = i;j<word.size();j++)
        
        {
            auto ss = word.substr(i,j-i+1);
            if(dict.find(ss)!=dict.end())
            {
                res = res || breaker(j+1,word);
            }

        }
        
        return c[i]=res;
    }
};
