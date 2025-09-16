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
    unordered_map<int,vector<int>>mp;
    unordered_set<int>vis;
    int amountOfTime(TreeNode* root, int start) {
        dfs(root);
        
        queue<int>q;
        int m = 0;
        q.push(start);
        vis.insert(start);
        while(!q.empty()){
            int size = q.size();
            m++;
            for(int i=0;i<size;i++){
                int a = q.front();
                q.pop();
                auto vec = mp[a];
                for(auto n:vec){
                    if(vis.find(n)==vis.end()){
                        q.push(n);
                        vis.insert(n);
                    }
                }

            }
            
        }
        cout<<m<<endl;
        return m-1;
    }

    TreeNode* dfs(TreeNode* root){
        if(root==nullptr){
            return nullptr;
        }
        TreeNode* l = dfs(root->left);
        TreeNode* r = dfs(root->right);
        if(l!=nullptr){
            mp[l->val].push_back(root->val);
            mp[root->val].push_back(l->val);
        }
        if(r!=nullptr){
            mp[r->val].push_back(root->val);
            mp[root->val].push_back(r->val);
        }
        return root;
    }
};
