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
        vector<int> s;
        vector<int> s1;

    //for(ListNode* cur = l1, *cur1 = l2; (cur!= nullptr) || (cur1 !=  nullptr);)
        
    while(l1->next!=NULL)
        
    {
        int x = l1->val;
        //cout<<x << endl;
        s.push_back(x);
        l1 = l1->next;
    }
        int x = l1-> val;
        //cout<<x<<endl;
        s.push_back(x);
        
    while(l2->next != NULL)
    {
            int y =l2->val;
            s1.push_back(y);
            l2 = l2 ->next;
    }
        int c = l2->val;
        s1.push_back(c);
        int i =0;
        int j =0;
    if(s.size()>s1.size())
        {
            int d = s.size()-s1.size();
            while(d>0)
            {
                s1.push_back(0);
                d--;
            }
        }
        if(s.size()<s1.size())
        {
            int d = s1.size()-s.size();
            while(d>0)
            {
                s.push_back(0);
                d--;
            }
        }
        
        
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        for(i;i<s.size();i++ )
        {
            cout<< s[i]<< " ";
        }

        cout<<endl;
        for(j;j<s1.size();j++ )
        {
            cout<< s1[j]<< " ";
        }
        cout<<endl;
        

        

        int m = max(s.size(),s1.size());
        int carry = 0;
        int n =m-1;
        ListNode *l = new ListNode();
        auto lcp = l;
        //cout<<m<<endl;
        vector<int> v;
        //cout<<n << endl;
        while(n>=0)
        {
            
            int num1 = s[n];
            int num2 = s1[n];


            int sum = num1 + num2 + carry;

            if(sum>9)
            {
                carry = sum/10;
                int res = sum%10;
                v.push_back(res);

            }
            else
            {
                carry =0;
                v.push_back(sum);
            }
            n--;
        }
        if(carry>0)
        {
            v.push_back(carry);
        }
        
        for(int i = 0;i<v.size();i++ )
        {   
            
            
            l->val = v[i];
            if(i!=v.size()-1)
            {
            l->next = new ListNode();
            l=l->next;
            }
            
        }
        
    

    
     return lcp;  

    }
};
