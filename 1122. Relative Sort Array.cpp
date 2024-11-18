class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto x: arr1)
        {
            mp[x]++;
        }
        vector<int>ans;
        for(int i=0;i<arr2.size();i++)
        {
           int x= mp[arr2[i]];
           while(x!=0)
           {
             ans.push_back(arr2[i]);
             x--;
           }
           mp.erase(arr2[i]);
        }
        for(auto [k,v]:mp)
        {
            while(v>0)
            {
               ans.push_back(k); 
               v--;
            }
        }
        return ans;
    }
};
