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

struct Compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;  // Min-heap based on value
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
        for(auto x:lists)
        {
            if(x!=nullptr)
            {
                pq.push(x);

            }
            
        }
        ListNode* dummy=new ListNode(0);
        ListNode* curr = dummy;
        while(!pq.empty())
        {
            ListNode* small = pq.top();
            pq.pop();
            
            curr->next = small;
            curr = curr->next;
            if(small->next!=nullptr)
            {
                pq.push(small->next);
            }
        }
        return dummy->next;
    }
    
};
