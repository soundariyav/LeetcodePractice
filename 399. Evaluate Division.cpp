class Solution {
public:
    vector<vector<pair<int,double>>>adj;
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& values, vector<vector<string>>& queries) {
            set<string>s;
            for(auto x: e){
                s.insert(x[0]);
                s.insert(x[1]);
            }
            for(auto x:s){
                cout<<x<<" ";
            }
            cout<<endl;
            map<string,int>mp;
            int i=0;
            for(auto x:s){  
                mp[x] = i;
                i++;
            }
            int n = s.size();
            adj = vector<vector<pair<int,double>>>(n);
            for(int i=0;i<e.size();i++){
                 auto r = e[i];
                 int f = mp[r[0]];
                 int s = mp[r[1]];
                 adj[f].push_back({s,values[i]});
                 adj[s].push_back({f,
                 (1.0/values[i])});
            }
            
            vector<double>ans;
            for(auto x: queries){
                cout<< x[0] <<" "<< x[1]<<endl;
                
                double sum = 1.0;
                if(mp.find(x[1])== mp.end() || mp.find(x[0])==mp.end()){
                    ans.push_back(-1.0);
                }
                else{
                    int t = mp[x[1]];
                    int node = mp[x[0]];
                cout<<x[1]<<" t "<< t<<" " << x[0]<< " node "<< node <<endl;
                    vector<int>vis(n,-1);
                    double val = dfs(node,t,vis,sum);
                    ans.push_back(val);
                }
                
                
            }
        return ans;
    }
    double dfs(int node,int t, vector<int>& vis,double sum){
        if(node==t){
            return sum;
        }
       
        vis[node]=1;
        for(auto& x: adj[node]){
            if(vis[x.first]==-1)
           {
              
              double res = dfs(x.first,t,vis,sum*x.second);
              if(res!=-1.0)return res;
            
           }
        }
        
        return -1.0;
    }
};
