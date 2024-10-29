class CustomStack {
public:
    int size=0;
    vector<int>arr;
    CustomStack(int maxSize) {
        
        size = maxSize;

    }
    
    void push(int x) {
        if(arr.size()<size)
        {
            arr.push_back(x);
            cout<<"element pushed" << x << endl;
        }
    }
    
    int pop() {
        if(arr.empty())
        {
            return -1;
        }
        else
        {
            int n=arr.size();
            int b = arr[n-1];
            cout<<"element poped" << b <<endl;
            arr.pop_back();
            return b;
        }
    }
    
    void increment(int k, int val) {
        if(arr.size()<k)
        {
            int n= arr.size();
            for(int i=0;i<n;i++)
            {
                arr[i] = arr[i]+val;
                cout<< "element modified " << arr[i] <<endl;
            }
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                arr[i]= arr[i]+val;
                cout<< "element modified " << arr[i] <<endl;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
