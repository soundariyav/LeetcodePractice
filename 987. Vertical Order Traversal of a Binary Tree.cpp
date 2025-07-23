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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,map<int,multiset<int>>>mp;
        queue<tuple<TreeNode*,int,int>>q;
        q.push({root,0,0});
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                auto [node,v,l]= q.front();
                mp[v][l].insert(node->val);
                q.pop();
                if(node->right){
                    int ver = v+1;
                    int ler = l+1;
                    q.push({node->right,ver,ler});
                }
                if(node->left){
                    int ver = v-1;
                    int ler = l+1;
                    q.push({node->left,ver,ler});
                }
            }

        }
        for(auto p: mp){
            vector<int>col;
            for(auto q: p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
