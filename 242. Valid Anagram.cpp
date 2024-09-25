class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mymap;
        unordered_map<char,int>mymap1;
        if (s.size() != t.size()) return false;
        for(int i=0;i<s.size();i++)
        {
            mymap[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(mymap.find(t[i])!=mymap.end())
            {
                mymap[t[i]]--;
                if(mymap[t[i]]<0)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        
        return true;
    }
};
