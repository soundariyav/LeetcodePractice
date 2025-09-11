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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>a;
        ListNode* curr = head;
        while(curr!=nullptr){
            a.push_back(curr->val);
            curr= curr->next;
        }
        int size = a.size();
        int l = size-k;
        int f = k-1;
        swap(a[l],a[f]);
        for(auto x: a){
            cout<<x<<" ";

        }
        ListNode* cur = new ListNode(a[0]);
        ListNode* nh = cur;
        int i=1;
        while(i<a.size()){
            ListNode* nnode = new ListNode(a[i]);
            cur->next = nnode;
            cur= cur->next;
            i++;
        }
        return nh;
    }
};
