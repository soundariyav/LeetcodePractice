class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char,int>mp;
        if(s.size()<3)return 0;
        int count=0;
        for(int i=0;i<3;i++){
            mp[s[i]]++;
        }
        if(mp.size()==3)count++;
        for(int j=3;j<s.size();j++){
            auto left = j-3;
            mp[s[j]]++;
            mp[s[left]]--;
            if(mp[s[left]]==0){
                mp.erase(s[left]);
            }
            if(mp.size()==3){
                count++;
            }
        }
        return count;
    }
};
