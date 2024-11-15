class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(s.begin(),s.end());
       sort(g.begin(),g.end());
       int content=0;
       int ind =0;
       while(ind<s.size()&&content<g.size())
       {
        if(s[ind]>=g[content])
        {
            content++;
        }
        ind++;
       }
       return content;
    }
};
