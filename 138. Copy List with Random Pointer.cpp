/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    map<int,Node*>mp1;
    map<Node*,Node*>mp2;
    Node* copyRandomList(Node* head) {
        auto conode = copy(head);
        setting(head,conode);
        int i=0;
        Node*dummy = conode;
        while(conode!=nullptr){
           auto ranode= mp1[i];
            auto rnode= mp2[ranode];
            conode->random = rnode;
            conode = conode->next;
            i++;
        }
        return dummy;
    }
    Node* copy(Node* head){
        Node* curr = new Node(0);
        Node* dummy = curr;
        int i=0;
        while(head!=nullptr){
            Node* c = new Node(head->val);
            curr->next= c;
            curr = curr->next;
            mp1[i]=head->random;
            head = head->next;
            i++;
        }
        return dummy->next;
    }
    void setting(Node* h1, Node* h2){
        while(h1!=nullptr){
            mp2[h1] = h2;
            h1= h1->next;
            h2 = h2->next;
        }

    }
};
