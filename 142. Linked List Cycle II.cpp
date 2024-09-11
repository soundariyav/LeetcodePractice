class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *tortoise = head;
        ListNode *hare = head;
        if(head==nullptr)
        {
            return nullptr;
        }

        while((hare!=nullptr)&&(hare->next!=nullptr))
        {
           tortoise = tortoise->next;
           hare= hare->next->next;
           if(tortoise==hare)
           {
            break;
           }
        }
        if((hare==nullptr)||(hare->next==nullptr))
        {
            return nullptr;
        }
        //find the entrance of the cycle
        tortoise=head;
        while(tortoise!=hare)
        {
            tortoise=tortoise->next;
            hare = hare->next;
        }


        return hare;
    }
};
