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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>a;
        ListNode* curr= head;
        while(curr!=nullptr){
            a.push_back(curr->val);
            curr = curr->next;
        }
        int size = a.size();
        int prev = a[0];
        vector<int>sm(size,0);
        //int prev = 0;
        stack<int>st;
        for(int i=a.size()-1;i>=0;i--){
            if(st.empty()){
                sm[i]=0;
                st.push(a[i]);
            }
            else{
                while(!st.empty() && st.top()<=a[i]){
                    st.pop();
                }   
                if(st.empty()){
                    sm[i]= 0;
                    st.push(a[i]);
                }
                else{
                    sm[i]= st.top();
                    st.push(a[i]);
                }
            }
        }
        return sm;
    }
};
