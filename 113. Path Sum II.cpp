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
    vector<vector<int>>ans;
    vector<vector<int>>res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>c;
        dfs(root,c);
        for(auto x: ans){
            int sum = accumulate(x.begin(),x.end(),0);
            if(sum==targetSum){
                res.push_back(x);
            }
           
        }
        return res;
    }
    void dfs(TreeNode* root,vector<int>& c){
        if(root==nullptr){
            return;
        }
        c.push_back(root->val);
        if(!root->left && !root->right){
            ans.push_back(c);
            c.pop_back();
            return;
        } 
        dfs(root->left,c);
        dfs(root->right,c);
        c.pop_back();
        return;
        
    }
};
