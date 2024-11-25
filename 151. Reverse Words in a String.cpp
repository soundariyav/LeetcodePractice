class Solution {
public:
    string reverseWords(string s) {
        // Trim the leading and trailing blank spaces
        int start=0;
        int end = s.size();
        while(start<=end && s[start]== ' ') start++;
        while(start<=end && s[end]== ' ') end--;
        if(start>end) return " ";
        string word;
        vector<string>words;
        stringstream ss(s.substr(start, end-start+1));
        while(ss>>word)
        {
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string result;
        for(int i=0;i<words.size();i++)
        {
            result += words[i];
            if (i != words.size() - 1) {
                result += " ";
            }
        }
        return result;
    }
};
