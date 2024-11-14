/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(dfs(root,nullptr,nullptr))
        {
            return true;
        }
        return false;
        
    }
    bool dfs(TreeNode* root, TreeNode*l, TreeNode *h)
    {
        if(root==nullptr)
        {
            return true;
        }
        if((l!=nullptr && l->val>=root->val)||(h!=nullptr && h->val<=root->val))
        {
            return false;
        }
        return dfs(root->right,root,h)&&dfs(root->left,l,root);
    }
};
