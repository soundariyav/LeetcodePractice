struct compare{
    bool operator()(pair<char,int>a, pair<char,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first>b.first;
    }
};
class Solution {
public:
    string clearStars(string s) {
       priority_queue<pair<char,int>,vector<pair<char,int>>,compare>pq;
       for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                pq.push({s[i],i});
            }
            if(s[i]=='*'){
                //cout<<pq.top().first<< " and " << pq.top().second<<endl;
                pq.pop();
            }
       }
       map<int,char>mp;
       while(!pq.empty()){
            mp[pq.top().second]= pq.top().first;
            pq.pop();
       }
       string ans;
       for(auto [k,v]: mp){
            ans.push_back(v);
       }
       return ans;

    }
};
