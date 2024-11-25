class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s;
        map<int,int>m;
        for(auto x:arr)m[x]++;
        for(auto [k,v]: m)
        {
            if(s.find(v)!=s.end())
            {
                return false;
            }
            else
            {
                s.insert(v);
            }
        }
        return true;
    }
};
