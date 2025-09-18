class TaskManager {
public:
    priority_queue<pair<int,int>>pq;
    unordered_map<int,int>pr;
    unordered_map<int,int>tm;
    TaskManager(vector<vector<int>>& tasks) {
        for(auto x: tasks){
            int uid = x[0];
            int tid= x[1];
            int p = x[2];
            tm[tid]= uid;
            pr[tid]=p;
            pq.push({p,tid});
        }
        cout<<"done ";
    }
    
    void add(int userId, int taskId, int priority) {
         tm[taskId]= userId;
         pr[taskId]= priority;
         pq.push({priority,taskId});
    }
    
    void edit(int taskId, int newPriority) {
         pr[taskId]= newPriority;
         pq.push({newPriority,taskId});
    }
    
    void rmv(int taskId) {
        cout<<"iam here ";
         pr.erase(taskId);
         tm.erase(taskId);
         
    }
    
    int execTop() {
        while(!pq.empty() && (tm.find(pq.top().second)== tm.end() || pr[pq.top().second]!=pq.top().first)){
            //cout<<"yes";
            pq.pop();
        }
        if(pq.empty())return -1;
        auto [p,id]= pq.top();
        pq.pop();
        int ans = tm[id];
        tm.erase(id);
        pr.erase(id);
        return ans;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */
