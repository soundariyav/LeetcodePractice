/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr)
        {
            return nullptr;
        }
        queue<Node*>q;
        vector<vector<Node*>>level;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<Node*>l;
            for(int i =0;i<size;i++)
            {
                Node* f = q.front();
                q.pop();
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
                l.push_back(f);
            }
            level.push_back(l);
           
        }
        for(auto x: level){
            for(int i=0;i<x.size()-1;i++){
                Node* v = x[i];
                Node* r = x[i+1];
                v->next = r;
            }
        }
        return root;
    }
};
