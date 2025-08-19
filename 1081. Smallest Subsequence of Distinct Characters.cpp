class Solution {
public:
    string smallestSubsequence(string s) {
         map<char,int>mp;
        for(auto x: s){
            mp[x]++;
        }
        stack<char>st;
        set<char>se;
        for(auto x: s){
            if(st.empty()){
                st.push(x);
                mp[x]--;
                se.insert(x);
            }
            else if(se.find(x)!=se.end()){
                mp[x]--;
                continue;
            }
            else {
            while(!st.empty() && (st.top()>x && mp[st.top()]>0)){
                se.erase(st.top());
                st.pop();    
            }
            st.push(x);
            mp[x]--;
            se.insert(x);
            }

        }
        string r;
        while(!st.empty()){
            r.push_back(st.top());
            st.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};
