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
    vector<string>ans;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr)
        {
            return {};
        }
        string w="";
        dfs(root,w);
        return ans;

    }
    void dfs(TreeNode* node,string &w)
    {
        if(node==nullptr)
        {
            return;
        }
        cout<<node->val<<endl;
        w.push_back(node->val);
        dfs(node->left,w);
        dfs(node->right,w);
        ans.push_back(w);
        w.pop_back();
        
    }
};
