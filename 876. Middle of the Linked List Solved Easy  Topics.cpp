class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* cur = head;
        int mid=0;
        while(cur!=nullptr)
        {
            size++;
            cur = cur->next;
        }
        mid=(size/2);
         cur = head;
        while(mid>0)
        {
            cur=cur->next;
            mid--;
        }
        
        
        return cur;
    }
};
