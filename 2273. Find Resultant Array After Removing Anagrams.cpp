class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string,int>mm;
        vector<string>ans;
        for(int i=1;i<words.size();i++)
        {
            string s = words[i];
            sort(s.begin(),s.end());
            string y = words[i-1];
            sort(y.begin(),y.end());
            if(s==y)
            {
                words.erase(words.begin()+i);
                i--;
            }
        }
        return words;
    }
};
