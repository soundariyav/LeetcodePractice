struct compare{
    bool operator()(pair<string,int>a, pair<string,int>b){
        return a.first<b.first;
    }
};
class Solution {
public:
    map<vector<string>,int>st;
    vector<string> mostVisitedPattern(vector<string>& username, vector<int>& timestamp, vector<string>& website) {
        set<string>s;
        for(auto x: username){
            s.insert(x);
        }
        vector<tuple<int,string,string>>us_map;
        for(int i=0;i<username.size();i++){
            us_map.push_back({timestamp[i],username[i],website[i]});

        }
        sort(us_map.begin(),us_map.end());
        map<string,vector<string>>mp1;
       for(auto [t,u,w]: us_map){
           mp1[u].push_back(w);
       }
       for(auto [k,v]:mp1){
            dfs(v);
       }
       int maxa = 0;
       vector<string>ans;
       for(auto [k,v]: st){
            if(v>maxa){
                maxa= v;
                ans = k;
            }
            if(v==maxa && k<ans){
                ans = k;
            }
            
       }
       return ans;
        
    }
    void dfs(vector<string>& s){
        set<vector<string>> seen;
        for(int i=0;i<s.size();i++){
          for(int j=i+1;j<s.size();j++){
            for(int k=j+1;k<s.size();k++){
                vector<string>curr = {s[i],s[j],s[k]};
                if(seen.find(curr)==seen.end()){
                    st[curr]++;
                    seen.insert(curr);
                }
            }
          }
        }
       
    }
    
};
