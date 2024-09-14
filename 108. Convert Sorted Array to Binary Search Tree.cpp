class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return process(nums,0,nums.size()-1);
        
    }
    TreeNode* process(vector<int>& nums, int start,int end)
    {
        if(start>end)
        {
            return nullptr;
        }
        int mid = start + (end - start) / 2;
        TreeNode *root = new TreeNode;
        root->val = nums[mid];

        root->left = process(nums,start,mid-1);
        root->right = process(nums,mid+1,end);
        return root;


    }
};
