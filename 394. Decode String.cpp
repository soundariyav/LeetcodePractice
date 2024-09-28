class Solution {
public:
    string decodeString(string s) {
        string val;
        stack<string>sa;
        stack<int>n;
        string letter;
        string ans;
        for(int i =0;i<s.size();i++)
        {
            
            if(isdigit(s[i]))
            {
                val = val+s[i];
            }
            else if (s[i]=='[')
            {
                sa.push(letter);
                n.push(stoi(val));
                letter = "";
                val = "";
            }
            else if (s[i] == ']')
            {
                string temp = letter;
                int repeat = n.top();
                letter = sa.top();
                for(int i = 0;i<repeat;i++)
                {
                    letter = letter +temp;
                }
                sa.pop();
                n.pop();
            }
            else
            {
                letter = letter+s[i];
            }

        }
        cout<<letter<<endl;
        return letter;
        
    }
    
};
