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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>mp;
        ListNode* curr = head;
        while(curr!=nullptr){
            mp[curr->val]++;
            curr= curr->next;
        }
        curr = head;
        ListNode* h = new ListNode(0);
        ListNode* d = h;
        for(auto [k,v]: mp){
            if(v==1){
                ListNode* c = new ListNode(k);
                h->next = c;
                h = h->next;
            }
        }
        return d->next;
    }
};
