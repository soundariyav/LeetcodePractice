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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (root == nullptr) {
            return {}; // If the tree is empty, return empty result
        }
        queue<TreeNode*>q;
        //vector<>ans;
        //ans.push_back(root);
        
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            
            int size = q.size();
            vector<int>cl;
            vector<TreeNode*>v;
            for(int i=0;i<size;i++)
            {
                
                TreeNode*a = q.front();
                q.pop();
                v.push_back(a);
                if(a->left!=nullptr)
                {
                    q.push(a->left);
                   
                   
                }
                if(a->right!=nullptr)
                {
                    q.push(a->right);
                   // v.push_back(a->right);
                }
                cl.push_back(a->val);
                
                
              
            }
            cout<<level << ":";
            if(level%2!=0)
            {

                reverse(cl.begin(),cl.end());
                for(int i=0;i<v.size();i++)
                {
                    TreeNode* b = v[i];
                    b->val=cl[i];
                }

            }
            for(int i=0;i<cl.size();i++)
            {
                
                cout<< cl[i]<<" ";

            }
            cout<<endl;
            level++;
            
          
        }
        return root;
        
    }
};
