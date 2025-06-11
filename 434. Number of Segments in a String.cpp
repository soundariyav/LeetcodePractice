class Solution {
public:
    int countSegments(string s) {
        vector<string>ans;
        stringstream ss(s);
        string word;
        int count = 0;
        while (ss >> word)
        {
            count++;
            ans.push_back(word);
        }
        return count;
    }
    
};
