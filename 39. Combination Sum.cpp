class Solution {
public:
    vector<vector<int>>ans;
    vector<int>cl;
    int n=0;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        n = candidates.size();
        dfs(cl,0,target,candidates);
        return ans;
    }
    void dfs(vector<int>&cl,int s,int rs,vector<int>&candidates)
    {
        cout<<"entered"<<endl;
        if(rs<0)
        {
            return;
        }
        if(rs==0)
        {
           
            ans.push_back(cl);
        }
        for(int i=s;i<n;i++)
        {
            cout<<"step2"<<endl;
            cl.push_back(candidates[i]);
            dfs(cl,i,rs-candidates[i],candidates);
            cl.pop_back();
            //cl.pop_back();
        }
    }
    
};
