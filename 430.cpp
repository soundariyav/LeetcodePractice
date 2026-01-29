/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* h = head;
        if(h==nullptr){
            return {};
        }
        Node* l = dfs(h);
        return h;
    }
    Node* dfs(Node* n){
        Node* temp = nullptr;
        
        if(n->child == nullptr){
            if(n->next==nullptr){
                return n;
            }
            return dfs(n->next);
        }
        if(n->child!=nullptr){
            temp = n->next;
        }
        
        n->next = n->child;
        n->child->prev = n; 
        n->child = nullptr;
        cout<<"calling dfs "<< endl;
        Node* p = dfs(n->next);
        if(temp==nullptr){
            return p;
        }
        temp->prev = p;
        p->next = temp;
        return dfs(temp);

    }
};
