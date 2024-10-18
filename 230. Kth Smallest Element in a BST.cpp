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
    int kthSmallest(TreeNode* root, int k) {
      //  priority_queue<int,vector<int,int>,greater<int>>pq;
        queue<TreeNode*>q;
        if(root==nullptr)
        {
            return {};
        }
        q.push(root);
        vector<int>ans;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode* a = q.front();
                q.pop();
                if(a->left)
                {
                    q.push(a->left);

                }
                if(a->right)
                {
                    q.push(a->right);
                }
                ans.push_back(a->val);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};
