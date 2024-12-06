/**
 * Definition for doubly-linked list.
 * class Node {
 *     int val;
 *     Node* prev;
 *     Node* next;
 *     Node() : val(0), next(nullptr), prev(nullptr) {}
 *     Node(int x) : val(x), next(nullptr), prev(nullptr) {}
 *     Node(int x, Node *prev, Node *next) : val(x), next(next), prev(prev) {}
 * };
 */
class Solution {
public:
	vector<int> toArray(Node *head){
        Node* cur = head;
        vector<int>ans;
        while(cur!=nullptr)
        {
            int a = cur->val;
            ans.push_back(a);
            cur = cur->next;
        }
        return ans;
    }
};
