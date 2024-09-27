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
    bool hasPathSum(TreeNode* root, int targetSum) {
        stack<pair<TreeNode*,int>>s;
        if(root==nullptr)
        {
            return false;
        }
       
        int a = root->val;
        int sum = targetSum-a;
        if((sum==0)&&(!root->left)&&(!root->right))
        {
            return true;
        }
      
        int val=0;

        s.push({root,sum});
        while(!s.empty())
        {
            auto a = s.top().first;
            auto b = s.top().second;
    
            cout<<b<<endl;
            s.pop();
            if (a->left == nullptr && a->right == nullptr) {
                if (b == 0) {
                    return true; // Found a valid path
                }
            }
            
            if(a->right)
            {
                int pre = a->right->val;
                val = b-pre;
                cout<<"val of " << pre << " is " << val<<endl;
                s.push({a->right,val});
            }
            if(a->left)
            {
                int pre = a->left->val;
                val = b-pre;
                cout<<"val of " << pre << " is " << val<<endl;
              //  cout<<val<<endl;
                s.push({a->left,val});
            }
            
        }

        return{};
    }
    
};
