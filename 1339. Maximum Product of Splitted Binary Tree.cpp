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
    int t = 0;
    int m = 1e9+7;
    int ga = 0;
    long long prev = 0;
    int maxProduct(TreeNode* root) {
        dfs1(root);
        int ans = dfs(root)%m;
        cout<<ga<<endl;
        int a = ga%m;
        return a;
    }
    void dfs1(TreeNode* root){
        if(root==nullptr){
            return;
        }
        t+= root->val;
        dfs1(root->left);
        dfs1(root->right);
    }
    int dfs(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int lsum = root->val;
        int l = dfs(root->left);
        int r = dfs(root->right);
        lsum+= l;
        lsum+= r;
        int t2 = t-lsum;
        long long pr = (long long)lsum* t2;
        if(prev<pr){
            prev = pr;
            int lp = pr%m;
            ga = lp;
        }
        
        
        return lsum;
    }
};
