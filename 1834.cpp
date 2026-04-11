class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        // I will have to maintain two priority queue
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<tasks.size();i++){
            q.push({tasks[i][0],i});
        }
        vector<int>ans;
        long long t = q.top().first;
        while(ans.size()<tasks.size()){
            bool flag = true;
            cout<< " time "<< t << endl;
            while(!q.empty() && q.top().first<= t){
                
                 int index = q.top().second;
                // cout<< index<< " is available now entering into heap "<< q.front().first<< endl;
                 pq.push({tasks[index][1],index});
                 q.pop();
            }
            if(!pq.empty()){
                //cout<< " doing "<< pq.top().second<<endl;
                cout<< "time before "<< t<< endl;
                t+= pq.top().first;
                cout<< t << endl;
                ans.push_back(pq.top().second);
                flag = false;
                pq.pop();
            }
            if(flag){
                t=q.top().first;
            }

        }
        return ans;
        

    }
};
