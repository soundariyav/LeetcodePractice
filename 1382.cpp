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
    TreeNode* balanceBST(TreeNode* root) {
         vector<int>arr;
         make_array(root,arr);
         int m = arr.size();
        return make_tree(arr,0,m-1);

    }
    void make_array(TreeNode* root, vector<int>& arr){
        if(root==nullptr){
            return;
        }
        make_array(root->left,arr);
        arr.push_back(root->val);
        make_array(root->right,arr);
    }
    TreeNode* make_tree(vector<int>arr,int start,int end){
          if(start>end){
                return nullptr;
          }
          int mid = start + (end-start)/2;
          TreeNode* root = new TreeNode(arr[mid]);
          root->left = make_tree(arr,start,mid-1);
          root->right = make_tree(arr,mid+1,end);
          return root;

    }
};
