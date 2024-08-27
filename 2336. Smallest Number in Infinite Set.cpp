class SmallestInfiniteSet {
public:
    int val=1;
    priority_queue<int,vector<int>,greater<int>> pq;
    unordered_set<int>u_set;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        if(pq.empty())
        {
            int a= val;
            val++;
            return a;
        }
        int p =pq.top();
        pq.pop();
        u_set.erase(p);
        return p;
        
    }
    
    void addBack(int num) {
        if((num<val)&&(u_set.find(num)==u_set.end()))
        {
            pq.push(num);
            u_set.insert(num);
        }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
