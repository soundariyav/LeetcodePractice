class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>u_map;
        for(int i =0;i<strs.size();i++)
        {
            string strcopy = strs[i];
            sort(strcopy.begin(),strcopy.end());
            u_map[strcopy].push_back(strs[i]);
        }
        vector<string>val;
        vector<vector<string>>res;
        for (const auto& pair : u_map)
        {  
            auto a = pair.first;
            res.push_back(pair.second);
          //  cout<< a << " " << b <<endl;

        }
        return res;

    }
};
