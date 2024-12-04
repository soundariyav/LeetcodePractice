class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
      long long low=0;
      long long high = 1e14;
      while(low<=high)
      {
        long long mid = low+ (high-low)/2;
        long long rr=0;
        for(auto r:ranks)
        {
            rr+= sqrt(mid/r);
        }
        if(rr<cars)low = mid+1;
        else high = mid-1;
      }  
      return low;
    }
};
