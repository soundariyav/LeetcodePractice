class Solution {
public:
    int longestRepeatingSubstring(string s) {
        unordered_set<string> c;
        int left = 0;
        int maxl =0;
        for(int i =0;i<s.size();i++)
        {
            string cont="";
            for(int j =i;j<s.size();j++)
            {
                cont = cont + s[j];
                int n = cont.size();
                cout<< n << endl;
                if(c.count(cont)>0)
                {
                    maxl = max(maxl,n);
                }
                cout<<s[j] << endl;
                c.insert(cont);
            }
            


        }

        return maxl;
    }
};
