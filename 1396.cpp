class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>mp1;
    unordered_map<string,unordered_map<string,vector<int>>>mp2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp1[id]= {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
         auto from = mp1[id].first;
         auto time = mp1[id].second;
         mp1.erase(id);
         int diff = t-time;
         mp2[from][stationName].push_back(diff);
    }
    
    double getAverageTime(string startStation, string endStation) {
          auto res = mp2[startStation][endStation];
          int sum = accumulate(res.begin(),res.end(),0);
          double size = (double)res.size();
          return sum/size;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
