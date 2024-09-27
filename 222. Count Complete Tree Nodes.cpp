class Solution {
public:
    int countNodes(TreeNode* root) {
        //using a bfs approach
        if(root==nullptr)
        {
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
            auto a = q.front();
            q.pop();
            count++;
            if(a->left)
            {
                q.push(a->left);
            }
            if(a->right)
            {
                q.push(a->right);
            }
            }
        }
        return count;
        
    }
};
