class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return Test(root->left,root->right);

        
    }
    bool Test(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        else if(p==NULL || q==NULL)
        {
            return false;
        }
        else if(p->val!=q->val)
        {
            return false;
        }
        return Test(p->left,q->right)&& Test(q->left,p->right);
    }
};
