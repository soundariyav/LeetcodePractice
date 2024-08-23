class Solution {
public:
    bool isValid(string s) {
        stack<char> r;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
            {
                r.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(r.empty())
                {
                    return false;
                }
                else
                {
                    auto a = r.top();
                    if(a == '(')
                    {
                    r.pop();
                    }
                    else
                    {
                        return false;
                    }
                }

            } 
            else if(s[i]=='}')
            {
                if(r.empty())
                {
                    return false;
                }
                else
                {
                    auto a = r.top();
                    if(a == '{')
                    {
                    r.pop();
                    }
                    else
                    {
                        return false;
                    }
                }

            }
            else if(s[i]==']')
            {
                if(r.empty())
                {
                    return false;
                }
                else
                {
                    auto a = r.top();
                    if(a == '[')
                    {
                    r.pop();
                    }
                    else
                    {
                        return false;
                    }
                }

            }
        }
        if(!r.empty())
        {
            return false;
        }
        return true;
        
    }
};
