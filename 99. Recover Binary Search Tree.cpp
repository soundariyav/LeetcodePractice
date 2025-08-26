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
    vector<int>order;
    int i=0;
    void recoverTree(TreeNode* root) {
        dfs(root);
        sort(order.begin(),order.end());
        dfs1(root);
        return;
    }
    void dfs(TreeNode* root){
        if(!root)return;
        dfs(root->left);
        order.push_back(root->val);
        dfs(root->right);
    }
    void dfs1(TreeNode* root){
        if(!root)return;
        dfs1(root->left);
        if(root->val!=order[i]){
            
            root->val = order[i];
        }
        i++;
        dfs1(root->right);
    }

};
