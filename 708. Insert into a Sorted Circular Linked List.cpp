/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        vector<int>d;
        if(head==nullptr){
            Node* n = new Node(insertVal);
            n->next = n;
            return n;
        }
        Node* curr= head;
        for(;curr->next!=head; curr = curr->next){
            int v = curr->val;
            int nv = curr->next->val;
            // if the val is either out of bounds
            if(v>nv && ((insertVal>=v)|| (insertVal<=nv))){
                cout<<"here1 "<< nv<< " and v "<< v<<endl;
                break;
            }
            if(v<= insertVal && insertVal<= nv){
                cout<<"here2";
                break;
            }
        }
        Node* n = new Node(insertVal);
        Node* temp = curr->next;
        curr->next = n;
        n->next = temp;
        return head;
    
    }
};
