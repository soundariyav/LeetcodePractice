/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //hashset to store the nodes of the b linked list
        unordered_set<ListNode*>q;
        ListNode* b = headB;
        while(b!=nullptr)
        {
            q.insert(b);
            b=b->next;
        }
        ListNode * a = headA;
        while(a!=nullptr)
        {
            if(q.find(a)!=q.end())
            {
                return a;
            }
            a = a->next;
        }
        return {};
    }

};
