class Solution {
public:
  
    
    vector<int>curr;
    vector<vector<int>>ans;
    vector<vector<int>> combinationSum3(int k, int n) {
       // vector<int>used(10,0);
        dfs(1,k,n);
        return ans;
    
    }
    void dfs(int pos,int k, int n)
    {
        if(curr.size()==k)
        {
            int sum = accumulate(curr.begin(),curr.end(),0);
            if(sum==n)
            {
                ans.push_back(curr);
                return;
            }
            else
            {
                return;
            }
        }
        for(int i=pos;i<=9;i++)
        {
            curr.push_back(i);
            dfs(i+1,k,n);
            curr.pop_back();
        }

    }

};
