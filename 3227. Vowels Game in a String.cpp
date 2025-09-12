class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<char>st = {'a','e','i','o','u'};
        int count=0;
        for(auto x: s){
            if(st.find(x)!=st.end()){
                count++;
            }
        }
        if(count==0)return false;
        if(count==1)return true;
        return true;

    }
};
