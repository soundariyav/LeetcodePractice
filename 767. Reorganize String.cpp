class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>sy;
        priority_queue<pair<int,char>>p;
        int n =s.size();
        string ans;
        for(int i=0;i<s.size();i++)
        {
            sy[s[i]]++;
        }
        for(const auto&ch : sy)
        {
            p.push({ch.second,ch.first});
        }
        while(p.size()>1)
        {
            auto count1= p.top().first;
            auto char1=p.top().second;
            p.pop();
            auto count2= p.top().first;
            auto char2=p.top().second;
            p.pop();
            ans = ans+char1;
            cout<<ans<<endl;

            ans = ans +char2;
            cout<<ans<<endl;
            count1--;
            count2--;
            if(count1>0)
            {
                p.push({count1,char1});

            }
            if(count2>0)
            {
                p.push({count2,char2});
            }
            //cout<<ans<<endl;

        }
        if(!p.empty())
        {
            cout<<"step"<<endl;
            auto charf= p.top().second;
            ans = ans+ charf;
            cout<<ans<<endl;
            p.pop();
        }
        return ans.size() == s.size() ? ans : "";

    }
};
