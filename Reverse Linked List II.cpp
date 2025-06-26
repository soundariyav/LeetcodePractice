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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int ind=1;
        if(head==nullptr)return {};
        ListNode*dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* curr=head;
        ListNode* prev = dummy;
        int i=1;
        while(curr!=nullptr && i<left){
            prev = curr;
            curr = curr->next;
            i++;
        }
        ListNode* prev1 = prev;
        ListNode* curr1 = curr;
        while(curr!=nullptr && left<=right){
            ListNode* nn = curr->next;
            curr->next= prev;
            prev = curr;
            curr= nn;
            left++;
        }
        prev1->next = prev;
        curr1->next = curr;
        return dummy->next;
    }
};
