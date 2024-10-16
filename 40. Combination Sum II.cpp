class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        dfs(0,candidates,target);
        return ans;
        
    }
    void dfs(int ids,vector<int>& candidates,int rs)
    {
        if(rs<0)return;
        if(rs==0)
        {
            ans.push_back(curr);
            return;
        }
        for(int i=ids;i<candidates.size();i++)
        {
            cout<<"step2"<<endl;
            if(i>ids && candidates[i]==candidates[i-1])continue;
            curr.push_back(candidates[i]);
            dfs(i+1,candidates,rs-candidates[i]);
            curr.pop_back();
        }
    }
};
