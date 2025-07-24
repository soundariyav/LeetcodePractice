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
    int count;
    int averageOfSubtree(TreeNode* root) {
        count = 0;
        dfs(root);
        return count;
    }
    pair<int,int> dfs(TreeNode* root){
        if(root==nullptr){
            return {0,0};
        }
        int sum = root->val;
        auto l = dfs(root->left);
        auto r = dfs(root->right);
        sum+= l.first+ r.first;
        int n = l.second+r.second +1;
        int avg = sum/n;
        if(avg == root->val)count++;
        return {sum,n};
    }
};
