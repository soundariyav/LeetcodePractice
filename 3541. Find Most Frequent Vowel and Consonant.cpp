class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        map<char,int>mp1;
        set<char>st{'a','e','i','o','u'};
        for(auto x:s){
            if(st.find(x)!=st.end()){
                mp[x]++;
            }
            else{
                mp1[x]++;
            }
        }
        char l;
        int m=0;
        for(auto [k,v]:mp){
            if(m<v){
                m=v;
                l=k;
            }
        }
        
        char j;
        int b=0;
        for(auto [k,v]:mp1){
            if(b<v){
                b=v;
                j=k;
            }
        }
        cout<<b<<" " << j<< endl;
        return b+m;


    }
};
