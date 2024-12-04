class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
       long long low=1;
       long long sum = 0;
       for(int i = 0; i < candies.size(); ++i) {
            sum += candies[i];
        }
       long long high= 1e9;
        int result=0;
       while(low<=high)
       {
            long long mid= (low+high)/2;
             
            if(foo(candies,k,mid))
            {
                result= mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }

       } 
       return result;
    }
    bool foo(vector<int>&candies,long long k, long long mid)
    {
        long long count=0;
        cout<<mid<<endl;
        for(auto x: candies)
        {
            count += x / mid;
        }
        cout<<count<<endl;
       return count>=k;

    }
};
