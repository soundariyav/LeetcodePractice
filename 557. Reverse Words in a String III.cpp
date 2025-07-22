class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       vector<string>words;
       string word;
       while(ss>> word){
           reverse(word.begin(),word.end());
           words.push_back(word);
       }
       string ans;
       for(int i=0;i<words.size()-1;i++){
            ans+= words[i];
            ans+= " ";
       }
       ans+= words[words.size()-1];
       return ans;

    }
};
