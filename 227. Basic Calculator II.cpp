class Solution {
public:
    int calculate(string s) {
        stack<int>m;
        char sign = '+';
        int num = 0;
        int res=0;
        for(int i =0;i<s.size();i++)
        {
            char c = s[i];
            if(isdigit(c))
            {
                num = ((num*10) + (c - '0'));
            }

            if((!isdigit(c)&& !isspace(c)) || (i==s.size()-1))
            {
                if(sign == '-')
                {
                    m.push(-num);
                }
                else if(sign =='+')
                {
                    m.push(num);
                }
            
                else{
                    int n;
                    if(sign == '*')
                    {
                        n = m.top()*num;
                    }
                    else
                    {
                        //int b = m.top();
                        //cout<<b<<endl;
                        n = m.top()/num;
                        cout<<n<<endl;
                    }
                    m.pop();
                    m.push(n);
                }
                sign = s[i];
                num =0;

            }

        }
        while(!m.empty())
        {
            res = res+m.top();
            m.pop();
        }
        return res;
        
    }
};
