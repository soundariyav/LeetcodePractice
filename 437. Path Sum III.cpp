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
    map<long long,int>mp;
    int t=0;
    int pathSum(TreeNode* root, int targetSum) {
        t=targetSum;
        mp[0]++;
        dfs(root,0);
        return count;
    }
    void dfs(TreeNode* root,long long pathsum){
        if(root==nullptr)return;
        long long ch = (root->val+pathsum) - t;
        count+= mp[ch];
        long long h = root->val+pathsum;
        mp[h]++;
        dfs(root->left,h);
        dfs(root->right,h);
        mp[h]--;

        return;

    }
};
