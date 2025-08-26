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
    int rob(TreeNode* root) {
        auto ans = dfs(root);
        return max(ans.first,ans.second);
    }
    pair<int,int> dfs(TreeNode* root){
        if(root==nullptr){
            return {0,0};
        }
        auto l = dfs(root->left);
        auto r = dfs(root->right);
        int rob = root->val + l.second + r.second;
        int nrob = max(l.first,l.second) + max(r.first,r.second);
        return {rob,nrob};
    }
};
