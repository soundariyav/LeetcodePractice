class Solution {
public:
    bool canConstruct(string r, string m) {
        int n1= r.size();
        int n2 = m.size();
        if(n2<n1)return false;
        multiset<char>m1;
        for(auto x: m){
            m1.insert(x);
        }
        for(auto x:r){
            if(m1.find(x)==m1.end())
            {
                return false;
            }
            else
            {
                auto it = m1.find(x);
                m1.erase(it);
            }
        }
        return true;
        
        
    }
};
