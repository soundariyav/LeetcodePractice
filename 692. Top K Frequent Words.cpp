class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>m;
        int n = words.size();
        for(int i =0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        vector<string>ans;
        map<int,set<string>,greater<int>>mm;
        priority_queue<int>p;
        for(auto [x,v]:m)
        {
            cout<< x << " " << v << endl;
            mm[v].insert(x);
            p.push(v);
        }
        unordered_set<int>g;
        for(const auto&[x,v]: mm)
        {
            cout<< x;
            auto s = v;
            for(const auto& st : s)ans.push_back(st);
        }
        vector<string>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(ans[i]);
        }
        
           
           
        

       //t(ans.begin(),ans.end());
        return res;
    }
};
