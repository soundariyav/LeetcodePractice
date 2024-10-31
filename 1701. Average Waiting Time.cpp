class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        int f =c[0][0];
        double sum=0;
        int w=0;
        for(int i=0;i<c.size();i++)
        {
            int s = c[i][0];
            int e = c[i][1];
            
            if(f>s)
            {
             f = f+e;
             w = f-s;
            sum += w;
            }
            else
            {
                 w = e;
                sum+= e;
                f=s+e;
            }
            cout<< w <<endl;
        }
        int n= c.size();
        double avg = 0;
        avg = sum/n;


        return avg;
    }
};
