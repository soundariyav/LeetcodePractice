class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        //find prime numbers in the range between left and right using seieve of eratostheness
        vector<int>nums(right+1,1);
        for(int i= 2;i*i<=right;i++)
        {
            if(nums[i]==1)
            {
                for(int j=i*i ;j<=right;j =j+i)
                {
                    nums[j]=0;
                }
            }
        }
        vector<int>prime;
        for(int i= max(2,left);i<=right;i++)
        {
            if(nums[i]==1)
            {
                prime.push_back(i);
            }

        }
        //Got all the prime numbers
        int n1 = -1;
        int n2 = -1;
        int mini = 1e9;
        for(int i=1;i<prime.size();i++)
        {
            cout<<prime[i]<<endl;
           int d = prime[i]-prime[i-1];
           cout<<d<<endl;
           if(d<mini)
           {
             mini = d;
             n1 = prime[i-1];
             n2 = prime[i];
           }
        }
        vector<int>ans;
        ans.push_back(n1);
        ans.push_back(n2);
        return ans;
        
    }
};
