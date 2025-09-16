class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<pair<string,pair<string,string>>>ops;
        for(auto x: logs){
            stringstream ss(x);
            string id;
            string o; 
            string t;
            getline(ss,id,':');
            getline(ss,o,':');
            getline(ss,t);
            //cout<<"id "<< id<< " o "<< o <<" t "<< t<<endl;
            ops.push_back({id,{o,t}});
        }
        unordered_map<int,int>mp;
        unordered_map<int,int>total;
        stack<int>st;
        for(auto x: ops){
            int id = stoi(x.first);
            string op = x.second.first;
            int time =stoi(x.second.second);
            //cout<<id<< " and op "<< op << " and time "<< time<<endl;
            if(op=="start")
            {
                if(st.empty()){
                    st.push(id);
                    mp[id]= time;
                }
                else{
                    int id1 = st.top();
                    int duration = time - mp[id1];
                    total[id1]+= duration;
                    st.push(id);
                    mp[id]=time;
                }
            }
            else{
                int id1 = st.top();
                int duration = time - mp[id1]+1;
                total[id]+= duration;
                st.pop();
                if(!st.empty()){
                    int id1 = st.top();
                    mp[id1]= time+1;
                }
            }
        }
        vector<int>ans(n);
        for(auto [k,v]:total){
            ans[k]=v;
        }
        
        
        return ans;
        
    }
};
