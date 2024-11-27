class Solution {
public:
    string s1;
    string s2;
    string s3;
    unordered_map<int,unordered_map<int,unordered_map<int,bool>>>m;
    bool isInterleave(string e, string f, string g) {
        s1= e;
        s2= f;
        s3= g;
        
       return dfs(0,0,0);
    }
    bool dfs(int i, int j, int k)
    {
        if(m.find(i)!=m.end()&& m[i].find(j)!=m[i].end()&& m[i][j].find(k)!=m[i][j].end())//1
        {
            return m[i][j][k];//1
        }
        if(i==s1.size())
        {
            string e = s2.substr(j);
            string t= s3.substr(k);
            if(e==t)return m[i][j][k]=true;
            return m[i][j][k]=false;
        }
        if(j==s2.size())
        {
            string e = s1.substr(i);
            string t= s3.substr(k);
            if(e==t)return m[i][j][k]=true;
            return m[i][j][k]=false;
        }
        if(i>=s1.size() && j>=s2.size() && k<s3.size())
        {
            return m[i][j][k]=false;
        }
        bool flag = false;
        bool ans=false;
        bool ans1=false;
        if(s1[i]==s3[k])
        {
           ans= dfs(i+1,j,k+1); //n
        }
        if(s2[j]==s3[k])
        {
            ans1= dfs(i,j+1,k+1);//n
        }
        flag = ans || ans1;
        return m[i][j][k]=flag;
        

    }
};
