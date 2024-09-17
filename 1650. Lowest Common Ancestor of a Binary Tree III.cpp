/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        //hash set to store the parent of p node;
        unordered_set<Node*>s;
        Node* qt = q;
        Node* pt = p;
        while(pt!=nullptr)
        {
            s.insert(pt);
            pt = pt->parent;
        }
        while(qt!=nullptr)
        {
            if(s.find(qt)!= s.end())
            {
                return qt;
            }
            qt = qt->parent;
        }

        return{};
        
    }
};
