class Solution {
public:
vector<double> averageOfLevels(TreeNode* root) {
queue<TreeNode*>q;
q.push(root);
//int count =1;
vector<double>res;
    if(root == nullptr)
    {
        return res;
    }
    while(!q.empty())
    {
        int size = q.size();
        cout<<"size"<<size<<endl;
        vector<double>cl;
        
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
        double add = accumulate(cl.begin(),cl.end(),0.0);
        double n =cl.size();
        double av = add/n;
    
        res.push_back(av);
    }
    return res;
}
};
