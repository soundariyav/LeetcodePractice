class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,priority_queue<string,vector<string>,greater<string>>>mp;
        for(auto x:tickets){
            mp[x[0]].push(x[1]);
        }
        stack<string>st;
        vector<string>newit;
        st.push("JFK");
        while(!st.empty()){
            string ca = st.top();
            if(mp.find(ca)!=mp.end() && !mp[ca].empty()){
                st.push(mp[ca].top());
                mp[ca].pop();
            }
            else{
                newit.push_back(ca);
                st.pop();
            }
        }
        reverse(newit.begin(),newit.end());
        return newit;

    }
};
