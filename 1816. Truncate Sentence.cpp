class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        vector<string>w;
        while(ss>> word){
            w.push_back(word);
        }
        string ans;
        int i=0;
        for(i=0;i<k-1;i++){
            ans+= w[i];
            ans+= " ";
        }
        ans+= w[i];
        return ans;
    }
};
