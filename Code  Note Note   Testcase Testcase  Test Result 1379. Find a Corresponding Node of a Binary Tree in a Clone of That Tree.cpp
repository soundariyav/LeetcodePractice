class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==nullptr)
        {
            return{};
        }
        
        queue<TreeNode*>q;
        queue<TreeNode*>q1;
        q.push(original);
        q1.push(cloned);
        while(!q.empty())
        {
            int n =q.size();
            for(int i=0;i<n;i++)
            {
                auto a = q.front();
                auto b = q1.front();
                if(a==target)
                {
                    return b;
                }
                q.pop();
                q1.pop();
                //sum = sum+a->val;
                if(a->left)
                {
                    q.push(a->left);
                    q1.push(b->left);
                }
                if(a->right)
                {
                    q.push(a->right);
                    q1.push(b->right);
                }
            }

        }
        return{};
    }
};
