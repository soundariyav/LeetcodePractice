class Solution {
public:
    unordered_map<string,bool>dp;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>ans;
        set<string>st(words.begin(),words.end());
        for(auto x: words){
             if(dfs(x,st)){
                ans.push_back(x);
             }

        }
        return ans;
    }
    bool dfs(string word,set<string>&st){
        if(dp.find(word)!=dp.end()){
            return dp[word];
        }
        for(int i=1;i<word.size();i++){
            string p = word.substr(0,i);
            string su = word.substr(i);
            if((st.find(p)!=st.end() && st.find(su)!=st.end())|| (st.find(p)!=st.end()&& dfs(su,st))){
                dp[word]= true;
                return dp[word];
            }
            
        }
        return dp[word]=false;
    }

};
