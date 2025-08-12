class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        priority_queue<int,vector<int>,greater<>>unused;
        for(int i=0;i<n;i++){
            unused.push(i);
        }
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
        map<int,int>mp;
        int i=0;
        while(i<meetings.size()){
            while(!pq.empty() && pq.top().first<= meetings[i][0]){
                 int r = pq.top().second;
                 unused.push(r);
                 pq.pop();
            }
            if(!unused.empty()){
                pq.push({meetings[i][1],unused.top()});
                mp[unused.top()]++;
                unused.pop();
            }
            else if(unused.empty() && !pq.empty()){
                long long balance = meetings[i][1]- meetings[i][0];
                long long d = pq.top().first + balance;
                int r = pq.top().second;
                pq.pop();
                pq.push({d,r});
                mp[r]++;
            }
            i++;
        }
        int mm= 0;
        int ans =1e9;
        for(auto [k,v]:mp){
           mm = max(mm,v);
        }
        for(auto [k,v]:mp){
            if(v==mm){
                ans = min(k,ans);
            }
        }
        return ans;
    }
};
