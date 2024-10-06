class Solution {
public:
    int closetTarget(vector<string>& words, string target, int s) {
        map<string,vector<int>>m;
        int ans =1e9;
        int n=words.size();
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            {
                int v=min(abs(s-i), n-abs(s-i));
                ans =min(ans,v);
            }
            
        
        }
        if(ans==1e9)
        {
            return -1;
        }
         return ans;
        
    }
};
