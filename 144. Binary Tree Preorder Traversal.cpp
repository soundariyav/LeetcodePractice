class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        //Using a iterative and dfs approach using Stack
        vector<int>v;
        stack<TreeNode*>s;
        while(root || (!s.empty()))
        {
            if(root)
            {
                v.push_back(root->val);
                if(root->right)
                {
                    s.push(root->right);

                }
                root = root->left;
            }
            
            else 
            {
                root = s.top();
                s.pop();
            }
            
        }
        return v;


        
    }
};
