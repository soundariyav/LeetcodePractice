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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            int size = q.size();
            vector<int>l;
            for(int i=0;i<size;i++){
                auto a = q.front();
                q.pop();
                if(a->left!=nullptr){
                    q.push(a->left);
                }
                if(a->right!=nullptr){
                    q.push(a->right);
                }
                l.push_back(a->val);
            }
            ans.push_back(l);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
