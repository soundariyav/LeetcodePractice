class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        if(root==nullptr)
        {
            return{};
        }
        int sum = 0;
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n =q.size();
           
            for(int i=0;i<n;i++)
            {
                auto a = q.front();
                if(a->val%2==0)
                {
                   ans = checkval(a);
                   sum = accumulate(ans.begin(),ans.end(),sum);
                }
                q.pop();
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
        return sum;
    }
    vector<int> checkval(TreeNode * p)
    {
        vector<int>res;
        if(p->left)
        {
            auto a = p->left;
            if((a->left))
            {
                auto val =a->left->val;
                res.push_back(val);
            }
            if((a->right))
            {
                auto val =a->right->val;
                res.push_back(val);
            }
        }
        if(p->right)
        {
            auto a =p->right;
            if((a->left))
            {
                auto val =a->left->val;
                res.push_back(val);
            }
            if((a->right))
            {
                auto val =a->right->val;
                res.push_back(val);
            }
        }
        return res;
    }
};
