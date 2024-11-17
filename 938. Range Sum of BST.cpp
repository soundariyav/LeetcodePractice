class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr)
        {
            return {};
        }
        int count=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {

            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode*a = q.front();
                q.pop();
                if(a->left)
                {
                    q.push(a->left);
                }
                if(a->right)
                {
                    q.push(a->right);
                }
                if(a->val >=low && a->val <= high)
                {
                    int v = a->val;
                    cout<<v<<endl;
                    count+= v;
                }
            }
        }
        return count;
        
    }
};
