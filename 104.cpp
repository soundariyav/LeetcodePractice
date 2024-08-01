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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        int count =0;
        if(root == NULL)
        {
           return count;
        }
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> lres;
            for(int i =0;i<size;i++)
            {
                auto f = q.front();
                q.pop();
                lres.push_back(f->val);
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
                
            }
            count= count +1;
        }
        return count;
    }
};
