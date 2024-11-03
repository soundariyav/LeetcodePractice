class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string word = s + s;
        if(word.find(goal)<word.size())return true;
        return false;
    }
};
