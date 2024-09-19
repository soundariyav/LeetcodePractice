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
    int minDepth(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==nullptr)
        {
            return 0;
        }
        int count=1;
        q.push(root);
        vector<int>res;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> lres;
            for(int i =0;i<size;i++)
            {
                auto f = q.front();
                q.pop();
                lres.push_back(f->val);
                if((f->left==nullptr)&&(f->right==nullptr))
                {
                    return count;
                }
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
