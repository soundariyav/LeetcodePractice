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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        auto h1 = l1;
        auto h2 = l2;
        int ans =0;
        int carry = 0;
        ListNode* curr = new ListNode(0);
        ListNode* dummy = curr;
        while(h1!=nullptr || h2!=nullptr){
            int a1=0;
            int a2=0;
            if(h1!=nullptr){
                a1 = h1->val;
                h1 = h1->next;
            }
            if(h2!=nullptr){
                a2 = h2->val;
                h2 = h2->next;
            }
            int sum = a1+a2+carry;
            cout<<"a1 is "<< a1 << " a2 is "<< a2 <<" carry is "<< carry<<endl;
            if(sum<=9){
              
                carry = 0;
            }
            else{
                
                carry = sum/10;
                sum = sum%10;
                
            }
            cout<<"sum and carry is "<< sum << " " << carry <<endl;
            ListNode* c = new ListNode(sum);
            curr->next = c;
            curr = curr->next;

        }
        if(carry!=0){
            ListNode* c = new ListNode(carry);
            curr->next = c;
        }
        //addition
        
        return dummy->next;

       
        
       
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* cur = head;
        while(cur!=nullptr){
            ListNode* nn = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nn;       
        }
        return prev;
    }
    
};
