/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

class Solution {
public:
    Node* last = NULL;
    Node* first = NULL;
    Node* treeToDoublyList(Node* root) {
        if(!root)return{};
        helper(root);
        first->left = last;
        last->right = first;
        return first;
    }
    void helper(Node* node){
        if(node){
            helper(node->left);
            if(last){
                last->right = node;
                node->left = last;
            }
            else{
                first = node;
            }
            last = node;
            helper(node->right);
        }
    }
};
