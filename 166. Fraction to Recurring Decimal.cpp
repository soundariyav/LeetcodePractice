class Solution {
public:
    string fractionToDecimal(int n, int d) {
        string ans;
        if(d==0){
            return "0";
        }
        if(n==0){
            return "0";
        }
        if(n<0 ^ d<0){
            ans.push_back('-');
        }
        long long nu = labs((long long)n);
        long long de = labs((long long)d);
        long long q = nu/de;
        ans+= to_string(q);
        long long rem = nu%de;
        if(rem==0)return ans;
        ans.push_back('.');
        unordered_map<long long,int>mp;
        while(rem!=0){
            if(mp.find(rem)!= mp.end()){
                ans.insert(mp[rem],"(");
                ans.push_back(')');
                break;
            }
            mp[rem]= ans.size();
            rem = rem* 10;
            long long q = rem/de;
            ans+= to_string(q);
            rem = rem%de;
        }
        return ans;

    }
};
