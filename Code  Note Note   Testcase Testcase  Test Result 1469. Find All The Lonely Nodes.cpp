class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
        if(root==nullptr)
        {
            return{};
        }
        vector<int>sum;
     
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n =q.size();
            
            for(int i=0;i<n;i++)
            {
                int ans1=0;
                int ans2=0;
                auto a = q.front();
                cout<<a->val<<endl;
                q.pop();
                bool val1=false;
                bool val2=false;
                if(a->left)
                {
                    q.push(a->left);
                    val1=true;
                    ans1 = a->left->val;
                    cout<<" ";
                    cout<<ans1<<endl;
                }
                if(a->right)
                {
                    q.push(a->right);
                    val2=true;
                     ans2 = a->right->val;
                     cout<<" ";
                     cout<<ans2<<endl;
                     
                }
                if(val1^val2)
                {
                    cout<<"ste"<<endl;
                    if(val1==true)
                    {
                        sum.push_back(ans1);
                    }
                    if(val2==true)
                    {
                        sum.push_back(ans2);
                    }

                }
            }

        }
        return sum;
    }
};
