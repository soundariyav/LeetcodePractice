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
        queue<Node*>q;
        vector<vector<Node*>>v;
        if(root==nullptr){
         
            return root;
        }
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<Node*>r;
            for(int i=0;i<size;i++){
                Node* a = q.front();
                if(a->left){
                    q.push(a->left);
                }
                if(a->right){
                    q.push(a->right);
                }
                r.push_back(a);
                q.pop();
            }
            v.push_back(r);
        }
        for(auto x: v){
            reverse(x.begin(),x.end());
            Node*prev = NULL;
            for(auto y: x){
               // cout<<y->val<< " ";
                y->next = prev;
                prev = y;
            }
           // cout<<endl;
        }
        return root;
    }
};
