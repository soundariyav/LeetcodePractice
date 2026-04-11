struct Node{
    int val;
    Node* next;
    Node* prev;
};
class Solution {
public:
    int findTheWinner(int n, int k) {
        // formed the cycle
        unordered_set<int>vis;
        Node * root = new Node(1);
        vis.insert(1);
        Node* curr = root;
        for(int i=2;i<=n;i++){
            vis.insert(i);
            Node* p = new Node(i);
            curr->next = p;
            p->prev = curr;
            curr = curr->next;
        }
        curr->next = root;
        root->prev = curr;
        curr = root;
        
        while(vis.size()>1){
             int j=1;
            while(j<k){
                curr = curr->next;
                j++;
            }   
            cout<< curr->val<<endl;
            vis.erase(curr->val);
            Node* p = curr->prev;
            Node* t = curr->next;
            p->next = t;
            t->prev = p;
            curr = t;
        }
        //cout<<vis.size()<<endl;
        for(auto x: vis){
           return x;
        }
        return{};
        
    }
};
