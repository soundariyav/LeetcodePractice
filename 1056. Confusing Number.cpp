class Solution {
public:
    bool confusingNumber(int n) {
      map<int,char>mp;
      mp[0]='0';
      mp[1]='1';
      mp[6]='9';
      mp[8]='8';
      mp[9]='6';
      string num = to_string(n);
      string ans;
      for(auto x: num){
            cout<<x<<endl;
            if(mp.find(x-'0')==mp.end()){
                return false;
            }
            else{
                ans.push_back(mp[x-'0']);
            }
      }
      reverse(ans.begin(),ans.end());
      cout<<ans<<endl;
      if(ans!=num)return true;
      return false;

    }
};
