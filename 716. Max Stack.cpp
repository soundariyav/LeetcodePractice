class MaxStack {
public:
    stack<pair<int,int>>a;
    set<int>st;
    int i;
    priority_queue<pair<int,int>>pq;
    int t;
    MaxStack() {
        i= 0;
    }
    
    void push(int x) {
        a.push({x,i});
        pq.push({x,i});
        i++; 
        
    }
    
    int pop() {
        while(!a.empty() && st.find(a.top().second)!=st.end()){
            a.pop();
        }
        int ar = a.top().first;
        st.insert(a.top().second);
        a.pop();
        return ar;
    }
    
    int top() {
        while(!a.empty() && st.find(a.top().second)!=st.end()){
            a.pop();
        }
        int ar = a.top().first;
        ///st.insert(a.top().second);
        //a.pop();
        return ar;
    }
    
    int peekMax() {
        while(!pq.empty() && st.find(pq.top().second)!=st.end()){
            pq.pop();
        }
        if(!pq.empty()){
            return pq.top().first;
        }
        return {};
    }
    
    int popMax() {
        while(!pq.empty() && st.find(pq.top().second)!=st.end()){
            pq.pop();
        }
        if(!pq.empty()){
            int a = pq.top().first;
            st.insert(pq.top().second);
            pq.pop();
            return a;
        }
        return {};
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */
