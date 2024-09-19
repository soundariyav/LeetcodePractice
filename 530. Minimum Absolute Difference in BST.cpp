class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode * >q;
        if(root==nullptr)
        {
            return 0;
        }
        q.push(root);
        vector<int>lres;
        while(!q.empty())
        {
            
            int n = q.size();
            for(int i=0;i<n;i++)
            {
               auto a = q.front();
               int b = a->val;
               lres.push_back(b);
               q.pop();
               if(a->left)
               {
                 q.push(a->left);
               }
               if(a->right)
               {
                q.push(a->right);
               }
            }
        }
        sort(lres.begin(),lres.end());
        if(lres.size()==2)
        {
            int ans=lres[1]-lres[0];
            return ans;
        }
        if(lres.size()<2)
        {
            return lres[0];
        }
        else
        {
            int minDiff;
            for(int i=1;i<lres.size();i++)
            {
               
                int diff = lres[i] - lres[i - 1];
                minDiff = min(minDiff, diff);
                
    
            }
            return minDiff;
        }
        return {};
    }
};
