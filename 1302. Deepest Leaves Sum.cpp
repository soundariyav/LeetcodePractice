class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root==nullptr)
        {
            return{};
        }
        int sum = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n =q.size();
            sum=0;
            for(int i=0;i<n;i++)
            {
                auto a = q.front();
                q.pop();
                sum = sum+a->val;
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
        return sum;
    }
};
