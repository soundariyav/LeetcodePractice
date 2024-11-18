class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int>s;
        for(auto x: logs)
        {
            if(x[0]=='.' && x[1]=='.')
            {
                if(s.empty())
                {
                    continue;
                }
                else
                {
                    s.pop();
                }
            }
            else if(x[0]!='.')
            {
                s.push(1);
            }
            else
            {
                continue;
            }
        }
        int x = s.size();
        return x;
    }
};
