class Solution {
public:
    int n;
    vector<int>days;
    vector<int>costs;
    unordered_map<int,unordered_map<int,int>>memo;
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        n = days.size();
        this->costs= costs;
        this->days= days;
        return dp(0,0);
    }
    int dp(int limit,int i){
        if(memo.find(i)!=memo.end() && memo[i].find(limit)!= memo[i].end()){
            return memo[i][limit];
        }
        if(i>=n){
            return 0;
        }
        int local = 0;
        if(days[i]<=limit){
            local+= 0+ dp(limit,i+1);
        }
        else{
            // buy a. one day pass
            int o1= costs[0]+ dp(days[i],i+1);
            // buy a 7 day pass
            int o2 = costs[1]+ dp(days[i]+6,i+1);
            int o3 = costs[2] +dp(days[i]+29,i+1);
            local = min({o1,o2,o3});
        }
        return memo[i][limit]=local;
    }
};
