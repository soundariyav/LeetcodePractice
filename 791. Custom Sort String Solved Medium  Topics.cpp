class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> um;
        string res;
        for(int i = 0;i<order.size();i++)
        {
            um[order[i]] = i;
        }
        unordered_map<char,int>countmap;
        for(int i = 0;i<s.size();i++)
        {
            countmap[s[i]]++;
        }
        for(int i=0;i<order.size();i++)
        {
            if(countmap.find(order[i])!= countmap.end())
            {
                res.append(countmap[order[i]],order[i]);
                countmap.erase(order[i]);
            }
        }
        for(const auto& x :countmap)
        {
            res.append(x.second,x.first);
        }
        return res;
    }
};
