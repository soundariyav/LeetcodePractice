class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>val;
        string ans;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                val.push(i);
            }
            else if(s[i]==')')
            {
                int a = val.top();
                val.pop();
                reverse(s.begin() + a, s.begin() + i + 1);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='(')||(s[i]==')'))
            {
                cout<<"skip";
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
    
};
