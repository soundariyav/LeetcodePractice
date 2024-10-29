class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> partition(string s) 
    {
        vector<string>cl;
        dfs(0,s,cl);
        return ans;
       
    }
    void dfs(int start, string &s, vector<string> &cl)
    {
        if(start>=s.size())
        {
            ans.push_back(cl);
            return;
        }
        for(int i = start;i<s.size();i++)
        {
            if(isPal(s,start,i))
            {
                string word = s.substr(start,i-start+1);
                cout<<word<<endl;
                cl.push_back(word);
                dfs(i+1, s, cl);
                cl.pop_back();
            }
            
        }
    }
    bool isPal(string s, int st,int en)
    {
        while(st<en)
        {
            if(s[st]!=s[en])
            {
                return false;
            }
            st++;
            en--;
        }
        return true;
    }
};
