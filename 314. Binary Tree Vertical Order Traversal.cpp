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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        unordered_map<int,vector<int>> u_map;
        queue<pair<TreeNode*,int>>q;
        vector<vector<int>>ans;
        if(root==nullptr)
        {
            return {};
        }
        int minc=0;
        int maxc=0;

        int c = 0;
        q.push({root,0});
        while(!q.empty())
        {
            auto r = q.front().first;
            c = q.front().second;
            q.pop();
            if(r!=nullptr)
            {
                if(u_map.find(c) == u_map.end())
                {
                    u_map[c].push_back(r->val);
                }
                else if(u_map.find(c)!=u_map.end())
                {
                    u_map[c].push_back(r->val);
                }
            }

            minc = min(c, minc);
            maxc= max(c,maxc);
            if(r->left)
            {
                q.push({r->left,c-1});
            }
            if(r->right)
            {
                q.push({r->right,c+1});
            }
            

        }
        for(int i = minc;i<=maxc;i++)
        {
            if(u_map.find(i) != u_map.end())
            {
                ans.push_back(u_map[i]);
            }

        }
        return ans;
        
    }
};
