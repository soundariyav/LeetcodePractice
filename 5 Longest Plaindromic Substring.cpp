class Solution {
public:
    bool pal(string & x, int s ,int e)
    {
        while(s<e)
        {
            if(x[s]!=x[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int result=0;
        string res;
        for(int i =0;i< s.size();i++)
        {
            for(int j= i;j<s.size();j++)
            {
               bool ispal =  pal(s,i,j);
                if (ispal)
                {
                    int crnt = j-i+1;
                    if(crnt>result)
                    {
                    res = s.substr(i,j-i+1);
                    result = crnt;
                    }
                }

            }
        }
        return res;
        
    }
};
