/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    vector<int>val;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root);
        int no_of_nodes = *max_element(val.begin(),val.end());
        
        vector<vector<int>>adj(no_of_nodes+1);
        vector<int>vis(no_of_nodes+1,-1);
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<q.size();i++){
                TreeNode* a = q.front();
                int val = a->val;
                q.pop();
                if(a->left){
                    adj[val].push_back(a->left->val);
                    adj[a->left->val].push_back(val);
                    q.push(a->left);
                }
                if(a->right){
                    adj[val].push_back(a->right->val);
                    adj[a->right->val].push_back(val);
                    q.push(a->right);
                }
            }
        }
        for(int i=0;i<adj.size();i++){
            cout<< i<< " -> ";
            for(auto x: adj[i]){
                cout<< x<< " ";
            }
            cout<<endl;
        }
        traversal(adj,0,vis, k,target->val);

        
       return ans;

        
    }
    // to find the all the nodes value and put it in a vector
    void dfs(TreeNode* root){
        if(root==nullptr){
            return;
        }
        val.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
        
    }
    // Now start from 
    void traversal(vector<vector<int>>& adj, int l,vector<int>& vis,int k,int node){
        if(l==k){
            ans.push_back(node);
            return; 
        }
        vis[node]= 1;
        for(auto x: adj[node]){
            if(vis[x]==-1){
                traversal(adj,l+1,vis,k,x);
            }
        }
    }
};
