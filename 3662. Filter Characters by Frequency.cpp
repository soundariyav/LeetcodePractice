class Solution {
public:
    string filterCharacters(string s, int k) {
        map<char,int>mp;
        for(auto x: s){
            mp[x]++;
        }
        //set<char>st;
        string ans;
        for(auto x: s){
            if(mp[x]<k ){
                ans.push_back(x);
               
            }
        }
        return ans;
    }

};
