class Solution {
public:
    unordered_map<int,int>mp;
    vector<pair<int,int>>v;
    int getKth(int lo, int hi, int k) {
         mp[2]= 1;
         mp[3] = 7;
         for(int i= lo; i<=hi; i++){
            int a = dfs(i);
            v.push_back({a,i});
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
    int dfs(int n){
        if(n==1){
            return 0;
        }
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
        int count = 0;
        if(n%2==0){
            int m = n/2;
            count = 1+ dfs(m);
            mp[n] = count;
        }
        else{
            int m = (3*n)+1;
            count = 1+ dfs(m);
            mp[n] = count;
        }
        return count;
    }

};

