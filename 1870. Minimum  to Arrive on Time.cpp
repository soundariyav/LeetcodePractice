class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1;
        int high = 1e7;
        int result=-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            double ans = checkFunc(mid,dist);
            if(ans<=hour)
            {
                result=mid;
                high=mid-1;
            }
            else
            {
                low= mid+1;
            }
        }
        return result;
    }
    double checkFunc(int x,vector<int>d)
    {
        double timetaken=0.0;
        for (int i=0;i<d.size();i++)
        {
            // Perform division (using floating-point division)
            double result = (double)d[i]/(double)x;

            // Round up the result and convert it to an integer
            
            timetaken+= (i==d.size()-1? result : ceil(result));
        }
        return timetaken;

    }
};
