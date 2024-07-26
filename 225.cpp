class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // swap the names of two queues
        //queue<int> q = q1;
        swap(q1,q2);

       // q2 = q1;
                
    }
    
    int pop() {
        if (q1.empty())
        {
            auto e = q2.front();
            q2.pop();
            return e;
        }
        else
        {
            auto e = q1.front();
            q1.pop();
            return e;
        }
    }

    
    int top() {
        if (q1.empty())
        {
            auto e = q2.front();
            //q2.pop();
            return e;
        }
        else
        {
            auto e = q1.front();
           // q1.pop();
            return e;
        }
    }
    
    bool empty() {
        if (q1.empty()&&q2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

};
