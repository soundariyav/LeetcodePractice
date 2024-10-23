class Solution {
public:
    int shortestDistance(vector<string>& w, string word1, string word2) {
        string s = word1;
        string d = word2;
        vector<int>start;
        vector<int>end;
        for(int i=0;i<w.size();i++)
        {
            if(w[i]==s)
            {
                start.push_back(i);
            }
            else if(w[i]==d)
            {
                end.push_back(i);
            }
        }
        int ans=1e9;
        for(auto x: start)
        {
            for(auto y:end)
            {
                int diff = abs(x-y);
                ans = min(ans, diff);

            }
        }
        return ans;

    }
};
