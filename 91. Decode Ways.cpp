class Solution {
public:
    int way;
    int n;
    string s;
    vector<int>dop;
    int numDecodings(string r) {
        s = r;
        n = s.size();
        dop=vector<int>(n+1,-1);
        way = dp(0);
        return dop[0];
    }
    int dp(int i)
    {
        if(i==n)
        {
            return 1;
        }
        if(dop[i]!=-1)
        {
            return dop[i];
        }
        int res=0;
       //
        if(s[i]=='0')return dop[i]=0;
        
        res+= dp(i+1);
        if(i+1<n)
        {
           // cout<< i <<endl;
            int f = (s[i]-'0')*10;
            //cout<<f <<endl;
            int g = (s[i+1]-'0');
           // cout<<g<<endl;
            int num = f+g;
            //cout<<num<<endl;
            if(num<=26)
            {
                
              //  cout<<"hello";
                res+=dp(i+2);
            }
        }
        return dop[i]=res;
    }
};
