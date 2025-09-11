class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
         mp[key].push_back({timestamp,value});
    }
    string get(string key, int timestamp) {
        if(mp.find(key)== mp.end())return {};
          auto &r = mp[key];
          auto it = lower_bound(r.begin(),r.end(),make_pair(timestamp,"a"))-r.begin();
          if(it==r.size()){
                string v = r[r.size()-1].second;
                return v;
          }
          if(r[it].first==timestamp){
                string v = r[it].second;
                return v;
          }
          if(it!=0){
                int i= it-1;
              string v = r[i].second;
              return v;
          }
          return {};
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
