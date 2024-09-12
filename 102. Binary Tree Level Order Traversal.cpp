class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>res;
        if (root == nullptr) {
            return res; // If the tree is empty, return empty result
        }
        queue<TreeNode*>q;
        q.push(root);
         
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int>cl;
            for(int i=0;i<size;i++)
            {
                TreeNode*a = q.front();
                q.pop();
                if(a!=nullptr)
                {
                cl.push_back(a->val);
                }
                if(a->left!=nullptr)
                {
                    q.push(a->left);
                }
                if(a->right!=nullptr)
                {
                    q.push(a->right);
                }

            }
            res.push_back(cl);
        }
        return res;
    }
};
