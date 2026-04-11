class Solution {
public:
    int maximumLengthSubstring(string s) {
        //    b c b a
        // b - 2
        // c - 1
        // a - 1

        // 3 , 3 , 2, 3 , 4
        unordered_map<char,int>mp;
        int ans=0;
        int left = 0;
        for(int i=0;i<s.size();i++){
             mp[s[i]]++;
             while(mp[s[i]]>2){
                 mp[s[left]]--;
                 if(mp[s[left]]==0){
                    mp.erase(s[left]);
                 }
                left++;
            }
            ans = max(ans, (i-left+1));
        }
        return ans;
    }
};
