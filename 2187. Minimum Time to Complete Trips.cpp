class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low=1;
        long long high= 1e14;
        while(low<high)
        {
            long long int mid=low+(high-low)/2;
            if(numberofTrips(time,mid)>= totalTrips)
            {
                high=mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
    long long int numberofTrips(vector<int>a, long long int x)
    {
            long long sum=0;
            for(auto r: a)
            {
                sum+= x/r;

            }
            return sum;
    }

};
