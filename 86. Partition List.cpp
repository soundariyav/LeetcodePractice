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
    ListNode* partition(ListNode* head, int x) {
         vector<int>l;
         vector<int>g;
         ListNode*curr = head;
         while(curr!=nullptr){
            if(curr->val<x){
                l.push_back(curr->val);
                curr= curr->next;
            }
            else{
                g.push_back(curr->val);
                curr = curr->next;
            }
         }
         ListNode* nh= new ListNode(0);
         ListNode* dummy = nh;
         for(auto x: l){
                ListNode* v = new ListNode(x);
                nh->next = v;
                nh = nh->next;
         }
         for(auto x: g){
           ListNode* v = new ListNode(x);
            nh->next = v;
            nh = nh->next;
         }
         return dummy->next;
    }
};
