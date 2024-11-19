class Solution {
public:
    string reverseVowels(string s) {
        stack<char>sa;
        set<char>st = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])!=st.end())
            {
                sa.push(s[i]);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(st.find(s[i])!=st.end())
            {
                char b= sa.top();
                s[i]=b;
                sa.pop();
            }
        }
        return s;
    }
};
