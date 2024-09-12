class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int count =1;
        vector<vector<int>>res;
        if(root == nullptr)
        {
            return res;
        }
        while(!q.empty())
        {
            int size = q.size();
            cout<<"size"<<size<<endl;
             vector<int>cl;
            
                for(int i =0;i<size;i++)
                {
                    TreeNode* a = q.front();
                    q.pop();
                    //vector<int>cl;
                    
                    if(a!=nullptr)
                    {
                        cl.push_back(a->val);
                    }
                    if(a->left!=nullptr)
                    {
                        cout<<"ste";
                        q.push(a->left);

                    }
                    if(a->right!=nullptr)
                    {
                        q.push(a->right);
                    }
                    

                }
            if(count%2==0)
            {
            reverse(cl.begin(),cl.end());
            }
            res.push_back(cl);
            count++;
            
        }
        return res;
    }
};
