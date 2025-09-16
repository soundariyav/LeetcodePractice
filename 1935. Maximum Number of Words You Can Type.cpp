class Solution {
public:
    unordered_set<char>st;
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        //vector<string>w;
        
        for(auto x: brokenLetters){
            st.insert(x);
        }
        string words;
        int count =0;
        while(ss>>words){
            if(helper(words)){
                count++;
             }
        }
        return count;
    }
    bool helper(string x){
        for(auto w: x){
            if(st.find(w)!= st.end())
            {
                return false;
            }
        }
        return true;
    }
};
