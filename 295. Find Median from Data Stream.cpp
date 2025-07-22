class MedianFinder {
public:
    priority_queue<int>l;
    priority_queue<int,vector<int>,greater<int>>r;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(l.empty() || num<=l.top()){
            l.push(num);
        }
        if(num>l.top()){
            r.push(num);
        }
        if(l.size()> r.size()+1){
            r.push(l.top());
            l.pop();
        }
        if(r.size()>l.size()){
            l.push(r.top());
            r.pop();
        }
        
    }
    
    double findMedian() {
        if(l.size()==r.size()){
            return (l.top()+ r.top())/2.0;
        }
        return l.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
