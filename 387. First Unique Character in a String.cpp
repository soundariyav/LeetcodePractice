class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        char a;
        int ans=1e9;
        for(auto [k,x]: mp)
        {
            if(x==1)
            {
                a = k;
                auto pos=s.find(a);
                if(pos!=std::string::npos)
                {
                    cout<<pos<<endl;
                    if(pos<ans)
                    {
                        ans=pos;
                    }
                }
                
            }
        }
        if(ans==1e9)return -1;
        return ans;
    }
};
