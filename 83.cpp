/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 // Stack 
 // traverse and add unique elements to stack 
 // while adding if duplicate element occurs we have change the previous pointer position to the next address.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        stack<ListNode*> s;
        if(head == nullptr)
        {
            return head;
        }
        for(ListNode* cur = head; cur != nullptr;cur = cur->next)
        {
            int x = cur->val;
            if((s.empty()) || (s.top()->val!=x))
            {
                s.push(cur);
            }
            else if (s.top()-> val==x)
            {
                s.top()->next = cur->next;
            }
        }


    return head;
    }
};
