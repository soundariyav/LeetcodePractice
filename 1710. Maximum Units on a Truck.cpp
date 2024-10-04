class Solution {
public:
    int maximumUnits(vector<vector<int>>& f, int s) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<f.size();i++)
        {
            int no = f[i][0];
            int c = f[i][1];
            pq.push({c,no});
        }
        int sum =0;
        int b =0;
        while(pq.size()!=0)
        {
            int c1=pq.top().first;
            int box = pq.top().second;
            cout<<"the capacity is" <<c1<<endl;
            cout<<"the boxes no is " << box<<endl;
            cout<<b<<endl;
            if(b+box<s)
            {
                b= b+box;
                cout<<"n0 of boxes" << b<<endl;
                sum = sum+ c1*box;
                cout<<"sum is " <<sum<<endl;
            }
            else if(b+box==s)
            {
                sum = sum+c1*box;
                cout<<"sum is " <<sum<<endl;
                return sum;
            }
            else
            {
                int rem = s - b;
                cout<<"rem is "<< rem << endl;
                sum = sum+ c1*rem;
                cout<<"sum is " <<sum<<endl;
                return sum;
            }  
            pq.pop();

        }
        return sum;

    }
};
