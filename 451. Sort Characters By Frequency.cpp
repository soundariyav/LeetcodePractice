class Solution {
public:
    string frequencySort(string s) {
        string result="";
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(const auto&[k,v]: m)
        {
           pq.push({v,k});
        }
        while(!pq.empty())
        {
            auto a = pq.top();
            auto letter = a.second;
            for(int i =0;i<a.first;i++)
            {
            result.push_back(letter);
            }
            pq.pop();
        }
        return result;
    }
};
