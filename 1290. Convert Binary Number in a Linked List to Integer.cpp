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
    int getDecimalValue(ListNode* head) {
        ListNode*a = head;
        string ans;
        while(a)
        {
            int v = a->val;
            ans = to_string(v)+ans;
            a = a->next;
        }
        cout<<ans<<endl;
        reverse(ans.begin(),ans.end());
        int g = stoi(ans,nullptr,2);
        return g;
    }
};
