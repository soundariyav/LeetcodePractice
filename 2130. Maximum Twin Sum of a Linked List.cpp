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
    int pairSum(ListNode* head) {
        map<int,int>mpp;
        int i=0;
        while(head!=nullptr){
            mpp[i]= head->val;
            i++;
            head= head->next;
        }
        int size = i;
        //cout<<"the size "<<size<<endl;
        int ans = 0;
        for(int j=0;j<size;j++){
            int twin = size-1-j;
            //cout<<"twin is "<< twin <<" and i is "<< j<<endl;
            int sum = mpp[twin] + mpp[j];
            ans = max(ans,sum);
        }
        
        return ans;
    }
};
