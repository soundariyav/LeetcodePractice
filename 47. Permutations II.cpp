class Solution {
public:
    int n =0;
    vector<int>w;
    set<vector<int>>s;
    vector<int>used;
    vector<int>cur;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        used = vector<int>(n,0);
        w = nums;
        dfs(used,cur);
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
    void dfs(vector<int>used,vector<int>&cur)
    {
        if(cur.size()==n)
        {
            //sort(cur.begin(),cur.end());
            s.insert(cur);
            return;
        }
        for(int i=0;i<w.size();i++)
        {
            if(used[i]==1)
            {
                continue;
            }
            else
            {
                used[i]=1;
                cur.push_back(w[i]);
                dfs(used,cur);
                used[i]=0;
                cur.pop_back();
            }
        }
    }
};
