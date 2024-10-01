class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>m;
        for(int i=0;i<num.size();i++)
        {
            m[num[i]]++;
        }
        for(int i=0;i<num.size();i++)
        {
            char a = i + '0';
            int expected = (i<num.size()) ? num[i]-'0' : 0;
            int actual = m[a];
            if(expected!=actual)
            {
                return false;
            }
        }

        return true;
    }
};
