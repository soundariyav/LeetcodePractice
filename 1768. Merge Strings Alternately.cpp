class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m =word2.size();
        int s;
        
        string res;
        if(n<m)
        {
            s = n; 
        }
        else if(n>m)
        {
            s = m;
        }
        int h=0;
        int t =s+s;
        int k =0;
        for(int i = 0;i<t;i++)
        {
            if(i%2==0)
            {
                res.push_back(word1[h]);
                h++;
            }
            else
            {
                res.push_back(word2[k]);
                k++;
            }
        }
        if(n>m)
        {
            while(s!=n)
            {
                res.push_back(word1[s]);
                s++;
            }
        }
        else
        {
            while(s!=m)
            {
                res.push_back(word2[s]);
                s++;
            }
        }
    return res;
    }
};
