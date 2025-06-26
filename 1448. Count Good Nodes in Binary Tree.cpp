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
    int count=0;
    int goodNodes(TreeNode* root) {
        dfs(root,-1e9);
        return count;
    }
    void dfs(TreeNode* root,int prev){
        if(root==nullptr){
            return;
        }
        if(root->val>=prev){
            count++;
        }
        dfs(root->left,max(prev,root->val));
        dfs(root->right,max(prev,root->val));
        

    }
};
