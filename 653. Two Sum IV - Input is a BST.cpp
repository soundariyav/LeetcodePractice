class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
         queue<TreeNode * >q;
        if(root==nullptr)
        {
            return 0;
        }
        q.push(root);
        unordered_set<int>s;
        vector<int>lres;
        while(!q.empty())
        {
           
            int n = q.size();
            for(int i=0;i<n;i++)
            {
               auto a = q.front();
               int b = a->val;
                int com = k - b;
                if(s.find(com)!=s.end())
                {
                    return true;
                }
                s.insert(b);
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
        if(lres.size()<2)
        {
            return false;
        }
        
        return {};
    }
};
