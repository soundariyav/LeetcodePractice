class Solution {
public:
    bool isStrobogrammatic(string num) {
       map<int,int>mp;
       mp[6]= 9;
       mp[9]= 6;
       mp[8]=8;
       mp[1]=1;
       mp[0]=0;
       for(auto [k,v]:mp){
        cout<<k<< "v" << v<<endl;
       }
       for(auto x: num){
            if(mp.find(x-'0')==mp.end()){
                return false;
            }
       }
       string ans;
       for(auto x: num){
            char c = mp[x-'0'];
            ans.push_back(c+'0');
       }
       reverse(ans.begin(),ans.end());
       if(ans == num)return true;
       return false;
    }
};
