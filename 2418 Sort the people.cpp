class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        int maxnum =0;
        vector<string> result;
        unordered_map<int, string> umap;
        for(int i=0;i<h.size();i++)
        {
            umap[h[i]]=names[i];
        }
        sort(h.begin(),h.end());
        reverse(h.begin(),h.end());
        for(int i =0;i<h.size();i++)
        {
            auto a =h[i];
            cout<<a<< endl;
        }
        for(int i=0;i<h.size();i++)
        {
           //string s = 
           auto it = umap.find(h[i]);
           string s = it->second;
           result.push_back(s);
        }
        return result;
    }
};
