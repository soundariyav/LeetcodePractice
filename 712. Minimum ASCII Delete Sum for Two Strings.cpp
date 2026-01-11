class Solution {
public:
    string s1;
    string s2;
    unordered_map<int,unordered_map<int,int>>mp;
    int minimumDeleteSum(string s1, string s2) {
        this->s1= s1;
        this->s2 = s2;
        return dp(0,0);
    }
    int dp(int i, int j){
        if(mp.find(i)!= mp.end() && mp[i].find(j)!= mp[i].end()){
            return mp[i][j];
        }
        if(i>=s1.size() || j>= s2.size()){
            if(i>=s1.size()){
                return sum(s2,j);
            }
            if(j>=s2.size()){
                return sum(s1,i);
            }
        }
        // if characters match
        int ans1 = 1e9;
        int ans2 = 1e9;
        int ans3 = 1e9;
        if(s1[i]==s2[j]){
            ans1 = 0 + dp(i+1,j+1);
        }
        else{
            // I have two choice
            int a1 = int(s1[i]);
            
            ans2 = a1 + dp(i+1,j);
            int a2 = int(s2[j]);
            ans3 = a2 + dp(i,j+1);
        }
        return mp[i][j]=min({ans1,ans2,ans3});
    }
    int sum(string s, int index){
        int res = 0;
        for(int i = index;i<s.size();i++){
            int a1 = int(s[i]);
            res+= a1;
        }
        return res;
    }
};




