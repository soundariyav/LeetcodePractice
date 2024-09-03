class Solution {
public:
    string minRemoveToMakeValid(string t) 
    {
        stack<int> s;
        int n = t.size();
        vector<char> v(n);
        for(int i = 0; i<n; i++){
            auto c = t[i];
            if((c=='(')|| (c ==')'))
            {
                if(c == '(')
                {
                    s.push(i);
                }
                if(c==')'){

                if(s.empty()) 
                {
                }
                else 
                {
                    int g =s.top();
                    s.pop();
                    v[g]= '(';
                    v[i]=')';
                }
                }
                
                
                    
            }
            else
            {
                v[i]= t[i];
            }
            
        }
        string res;
        
        for(int i = 0; i<v.size(); i++){
            if(v[i]=='\0')
            {

            }
            else
            {
            res.push_back(v[i]);
            }
        }
        return res;
    }
};
