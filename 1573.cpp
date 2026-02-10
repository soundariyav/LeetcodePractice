class Solution {
public:
    int t = 0;
    int n;
    string s;
    int mod = 1e9+7;
    unordered_map<int,unordered_map<int,int>>mp1;
    unordered_map<int,unordered_map<int,unordered_map<int,int>>>mp;
    int numWays(string s) {
        int a = 0;
        for(auto x: s){
            if(x=='1'){
                a++;
            }
        }
         n = s.size();
        this->s = s;
        if(a%3!=0){
            return 0;
        }
        t = a/3;
        //cout<< t<<endl;
        int ans=0;
        if(t!=0){
           ans+= dp(0,0,2);
        }
        if(t==0){
           ans+= dp1(0,2);
        }
        return ans;
    }
    int dp(int i, int co, int rem){
        if(mp.find(i)!= mp.end() && mp[i].find(co)!= mp[i].end() && mp[i][co].find(rem)!= mp[i][co].end()){
            return mp[i][co][rem];
        }
        if(i>=n-1){
            //cout<<" I am here 4"<< endl;
            //cout<< " the i "<< i << " and "<< n <<endl;
            if(rem!=0){
                return mp[i][co][rem]= 0;
            }
            if(co<=t){
                return mp[i][co][rem]=1;
            }
            return mp[i][co][rem]=0;
        }
        if(rem==0 && co<=t){
            return mp[i][co][rem]=1;
        }
        //cout<<" I am here "<< endl;
        if(s[i]=='1'){
            co+= 1;
            //cout<<" I am here 1"<< endl;
            if(co>t){
                //cout<<" I am here 2 "<< endl;
                return mp[i][co][rem]=0;
            }

        }
        // choice 1 split 
        int c1 = 0;
        if(co==t){
            c1 = (dp(i+1,0,rem-1))%mod;
        }
        //cout<<" I am here 3"<< endl;
        // choice 2 
        int c2 = (dp(i+1,co,rem))%mod;
        return mp[i][co][rem]=(c1+c2)%mod;
    }
    int dp1(int i,int rem){
        //cout<<" the i "<< i << " and rem "<< rem << endl;
        if(mp1.find(i)!= mp1.end() && mp1[i].find(rem)!= mp1[i].end()){
            return mp1[i][rem];
        }
        if(i>=n-1){
            if(rem!=0){
                return mp1[i][rem]=0;
            }
            if(rem<0){
                return mp1[i][rem]=0;
            }
            return mp1[i][rem]=1;
        }
        
        if(rem==0){
            //cout<<"return 1" << endl;
            return mp1[i][rem]=1;
        }
        // two choice
        int c1 = (dp1(i+1,rem-1))%mod;
        int c2 = dp1(i+1,rem)%mod;
        return mp1[i][rem]=(c1+ c2)%mod;
    }
};
