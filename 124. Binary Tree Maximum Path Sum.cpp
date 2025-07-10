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
    int maxPathSum(TreeNode* root) {
        int gm = INT_MIN;
        dfs(root,gm);
        return gm;
    }
    int dfs(TreeNode* node, int& gm){
        if(!node)return 0;
        int left = max(0,dfs(node->left,gm));
        int right = max(0,dfs(node->right,gm));
        int ls = node->val + left + right;
        gm = max(ls,gm);
        return node->val+ max(left,right);

    }
};
