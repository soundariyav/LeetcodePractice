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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l = new ListNode();
        auto lcopy = l;
        stack<ListNode*> s;

        for(ListNode* cur = list1, *cur1 = list2; (cur!= nullptr) || (cur1 !=  nullptr);)
        {
            if(cur == nullptr)
            {
                l->next = cur1;
                break;
            }
            if (cur1 == nullptr){
                l->next = cur;
                break;   
            }
            int x = cur->val;
            int y = cur1->val;
            //cout<< cur1->val<< endl;
            //cout<< cur->val <<endl;
            if(x==y)
            {
                l->next= cur1;
                cur1 = cur1-> next;
                l = l->next;

            }
            if(x<y)
            {
                
                
                    l->next = cur;
                    cur = cur-> next;
                    l=l->next;
            }
                
            
            if(x>y)
            {
                
                    
                l->next = cur1;
                cur1=cur1-> next;
                l = l->next;
                    
            }
        }




        
        
            
        
    return lcopy->next;
        
    }
};
