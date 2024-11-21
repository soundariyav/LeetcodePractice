class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char>s;
        int count=0;
        for(auto x: jewels)
        {
            s.insert(x);
        }
        for(auto x: stones)
        {
            if(s.find(x)!=s.end())
            {
                count++;
            }
        }
        return count;
    }
};
