class MovingAverage {
public:
    double a=0;
    vector<int>s;
    MovingAverage(int size) {
        a = size;
    }
    
    double next(int val) {
        s.push_back(val);
        
        if(s.size()<=a)
        {
            double num = accumulate(s.begin(),s.end(),0);
           // cout<<num<<endl;

            double sum = num/s.size();
           // cout<<s.size()<<endl;
            return sum;
        }
        else
        {
            int n = s.size()-1;
            int i=0;
            double num=0;
            while(n!=0 && i<a)
            {
                //cout<< s[n]<< " ";
                 num+=s[n];
                 //cout<<s[n]<<endl;
                 n--;
                 i++;
            }
            //cout<<endl;
            double sum = num/a;
            //cout<<"s is " << sum<<endl;
           
            return sum;
        }

    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
